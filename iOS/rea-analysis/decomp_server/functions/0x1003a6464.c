// rea decompile_all
// name: FUN_1003a6464
// address: 0x1003a6464
// body: available
// range: 0x1003a6464-0x1003a65c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a6590 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a6464(undefined8 param_1)

{
  ID self;
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  if (DAT_100a89190 != -1) {
    _swift_once(&DAT_100a89190,FUN_1003a62ac);
  }
  self = DAT_100a8b188;
  _objc_msgSend(DAT_100a8b188,"lock");
  if (DAT_100a89198 != -1) {
    _swift_once(&DAT_100a89198,FUN_1003a62dc);
  }
  puVar2 = &DAT_100a78700;
  FUN_100004bb4(&DAT_100a78700,&DAT_10080d560);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = &DAT_1009b8348;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_1009b8358;
  FUN_100004bb4(&DAT_100a8b198,&DAT_100820518);
  _swift_allocObject();
  _swift_retain(param_1);
  pcVar3 = FUN_1003a65c4;
  FUN_10026bd48(FUN_1003a65c4,0,FUN_1003a6600,0,FUN_1000103d0,0,0,param_1,puVar2,0);
  uVar1 = DAT_100a8b190;
  DAT_100a8b190 = pcVar3;
  _swift_release(uVar1);
  _objc_msgSend(self,"unlock");
  return;
}

