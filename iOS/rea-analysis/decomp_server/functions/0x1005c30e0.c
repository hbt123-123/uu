// rea decompile_all
// name: FUN_1005c30e0
// address: 0x1005c30e0
// body: available
// range: 0x1005c30e0-0x1005c31c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c30e0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar4 = unaff_x20[2];
  if ((int)uVar4 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)uVar4);
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_1005ba5d0(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar4 = unaff_x20[4];
  uVar3 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005c31a8;
    }
    lVar6 = (long)(int)uVar4;
    lVar7 = (long)uVar4 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar4 + 0x10);
    lVar7 = *(long *)(uVar4 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_1005c31a8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

