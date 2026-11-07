// rea decompile_all
// name: FUN_100663728
// address: 0x100663728
// body: available
// range: 0x100663728-0x1006637fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100663728(long param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = (uint)param_2;
  if ((param_2 & 0x100000000) != 0) {
    uVar4 = 0xffffffff;
  }
  uVar7 = *(ulong *)(param_1 + 0x10);
  uVar9 = uVar7;
  if (0xff < uVar7) {
    uVar9 = 0x100;
  }
  uVar5 = 0;
  while( true ) {
    uVar8 = uVar9;
    if (uVar5 == uVar7) {
      if ((param_3 & 1) == 0) {
        FUN_10067d7cc();
      }
      return ~uVar4;
    }
    if (((long)uVar7 < (long)uVar5) || ((long)uVar7 < (long)uVar8)) break;
    uVar9 = uVar7;
    if ((0xff < uVar7 - uVar8) && (uVar9 = uVar8 + 0x100, SCARRY8(uVar8,0x100))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006637f8);
      (*pcVar3)();
    }
    if ((long)uVar9 < (long)uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006637f4);
      (*pcVar3)();
    }
    if (uVar5 != uVar8) {
      uVar6 = uVar5;
      if ((long)uVar8 <= (long)uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006637fc);
        (*pcVar3)();
      }
      do {
        bVar1 = *(byte *)(param_1 + 0x20 + uVar6);
        uVar6 = uVar6 + 1;
        uVar2 = (bVar1 & 0xaaaaaaaa) >> 1 | (bVar1 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        if ((param_3 & 1) == 0) {
          bVar1 = (byte)(uVar2 >> 4) | (byte)((uVar2 & 0xf0f0f0f) << 4);
        }
        uVar4 = *(uint *)(&DAT_100ab4938 + (ulong)(byte)(bVar1 ^ (byte)uVar4) * 4) ^ uVar4 >> 8;
        uVar5 = uVar8;
      } while (uVar8 != uVar6);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006637f0);
  (*pcVar3)();
}

