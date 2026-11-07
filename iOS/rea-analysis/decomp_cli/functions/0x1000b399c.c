// rea decompile_all
// name: FUN_1000b399c
// address: 0x1000b399c
// body: available
// range: 0x1000b399c-0x1000b3acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b399c(code *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar7 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b3a80);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(param_3 + uVar4 * 8 + 0x20);
        _swift_retain(uVar6);
      }
      else {
        uVar6 = uVar4;
        FUN_1000794e0(uVar4,param_3);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b3a7c);
        (*pcVar1)();
      }
      uVar3 = uVar4 + 1;
      uVar2 = 0;
      (*param_1)();
      uVar5 = (uint)uVar2;
      _swift_release(uVar6);
    } while (((unaff_x21 == 0) && ((uVar2 & 1) == 0)) && (uVar4 = uVar4 + 1, uVar3 != uVar7));
  }
  return uVar5 & 1;
}

