// rea decompile_all
// name: FUN_10001ab44
// address: 0x10001ab44
// body: available
// range: 0x10001ab44-0x10001ac73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10001ac70 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001ab44(ID param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [4];
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  char local_38;
  
  _objc_msgSend(param_1,"screenId");
  FUN_10003990c(auStack_60);
  if (local_38 == '\x02') {
    uVar1 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
    FUN_1003fb48c(FUN_10003ef70,auStack_80,0xd0000000000000a9,0x8000000100877660,0xd000000000000019,
                  0x8000000100877ab0,0x9f0,0);
    return;
  }
  _objc_msgSend(param_1,"setResolutionWidth:",(ulong)local_5c);
  _objc_msgSend(param_1,"setResolutionHeight:",(ulong)uStack_58);
  _objc_msgSend(param_1,"setResolutionPixelWidth:",(ulong)local_54);
  _objc_msgSend(param_1,"setResolutionPixelHeight:",(ulong)uStack_50);
  return;
}

