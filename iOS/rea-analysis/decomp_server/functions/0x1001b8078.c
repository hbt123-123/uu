// rea decompile_all
// name: FUN_1001b8078
// address: 0x1001b8078
// body: available
// range: 0x1001b8078-0x1001b81df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001b8078(pid_t param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_50 [16];
  pid_t local_40;
  
  if (param_1 < 1) {
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    pcVar3 = FUN_1001b97c8;
    uVar2 = 300;
  }
  else {
    iVar1 = _kill(param_1,0);
    if ((iVar1 == 0) || (__s6Darwin5errnos5Int32Vvg(), iVar1 == 1)) {
      return true;
    }
    __s6Darwin5errnos5Int32Vvg();
    if (iVar1 == 3) {
      return false;
    }
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    pcVar3 = FUN_1001b97d0;
    uVar2 = 0x136;
  }
  local_40 = param_1;
  FUN_1003fb4bc(pcVar3,auStack_50,0xd000000000000093,0x800000010089b8d0,0xd000000000000014,
                0x800000010089c140,uVar2,0);
  return 0 < param_1;
}

