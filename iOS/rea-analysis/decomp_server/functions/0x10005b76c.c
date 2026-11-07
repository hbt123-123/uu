// rea decompile_all
// name: FUN_10005b76c
// address: 0x10005b76c
// body: available
// range: 0x10005b76c-0x10005b907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005b76c(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined1 auStack_78 [24];
  
  cVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (cVar1 == '\x02') {
      uVar2 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
      local_90 = param_3;
      if ((param_7 & 1) == 0) {
        FUN_1003fb4ec(FUN_10007f2dc,auStack_a0,0xd0000000000000a5,0x800000010087d850,
                      0xd000000000000050,0x800000010087dd90,0x41c,0);
        FUN_10005b088(param_3,0x2715,param_5,param_6);
      }
      else {
        FUN_1003fb4bc(FUN_10007f2e4,auStack_a0,0xd0000000000000a5,0x800000010087d850,
                      0xd000000000000050,0x800000010087dd90,0x414,0);
        FUN_100059d74(param_3,param_8,param_4,param_5,param_6);
      }
    }
    else {
      FUN_100057cf8(param_3,param_4,param_5,param_6);
    }
    _swift_release(param_2);
  }
  return;
}

