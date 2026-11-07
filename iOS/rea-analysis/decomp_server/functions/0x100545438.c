// rea decompile_all
// name: FUN_100545438
// address: 0x100545438
// body: available
// range: 0x100545438-0x10054559b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100545438(long *param_1,ulong *param_2,long param_3,byte param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong local_58;
  
  if ((param_4 & 1) == 0) {
    _swift_release(param_5);
    if (param_2 == (ulong *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100545530);
      (*pcVar3)();
    }
    uVar5 = param_3 + (long)param_2;
    puVar4 = param_2;
  }
  else {
    if ((ulong)param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100545534);
      (*pcVar3)();
    }
    if (((ulong)param_2 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10054559c);
      (*pcVar3)();
    }
    if (0x10 < (ulong)param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100545538);
      (*pcVar3)();
    }
    uVar7 = (uint)param_2;
    if (param_2 < (ulong *)0x80) {
      uVar6 = uVar7 + 1;
    }
    else {
      uVar2 = (uVar7 & 0x3f) * 0x100;
      uVar1 = (uVar2 | uVar7 >> 6 & 0x3f) * 0x100;
      uVar6 = (uVar7 >> 0x12) + (uVar1 | uVar7 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
      if ((ulong)param_2 >> 0x10 == 0) {
        uVar6 = (uVar7 >> 0xc) + uVar1 + 0x8181e1;
      }
      if (param_2 < (ulong *)0x800) {
        uVar6 = (uVar7 >> 6) + uVar2 + 0x81c1;
      }
    }
    uVar5 = (ulong)(4 - ((uint)LZCOUNT(uVar6) >> 3));
    local_58 = (ulong)uVar6 + 0xfefefefefefeff & (-1L << ((uVar5 & 7) << 3) ^ 0xffffffffffffffffU);
    puVar4 = &local_58;
    FUN_1005420a0();
    _swift_release(param_5);
  }
  *param_1 = (long)puVar4;
  param_1[1] = uVar5;
  param_1[2] = (long)param_2;
  param_1[3] = param_3;
  *(byte *)(param_1 + 4) = param_4;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  return;
}

