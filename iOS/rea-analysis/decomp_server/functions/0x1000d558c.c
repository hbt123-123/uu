// rea decompile_all
// name: FUN_1000d558c
// address: 0x1000d558c
// body: available
// range: 0x1000d558c-0x1000d56db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d5600 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d558c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  ID self;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  self = *(ID *)(param_1 + 0x10);
  _objc_msgSend(self,"lock");
  if (*(char *)(param_1 + 0x18) != '\0') {
    _objc_msgSend(self,"unlock");
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 2;
  _objc_msgSend(self,"unlock");
  uVar1 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
  local_a0 = param_2;
  uStack_98 = param_3;
  local_90 = param_4;
  FUN_1003fb4bc(FUN_1000d61cc,auStack_b0,0xd0000000000000b8,0x80000001008864a0,0xd000000000000020,
                0x8000000100886560,0x90,0);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x102;
  local_78 = param_2;
  uStack_70 = param_3;
  (*param_5)(&local_78);
  return;
}

