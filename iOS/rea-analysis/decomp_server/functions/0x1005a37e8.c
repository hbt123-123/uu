// rea decompile_all
// name: FUN_1005a37e8
// address: 0x1005a37e8
// body: available
// range: 0x1005a37e8-0x1005a390f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a37e8(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar5 = *unaff_x20;
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar4);
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar6);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  if ((*(byte *)((long)unaff_x20 + 0x2c) & 1) == 0) {
    lVar4 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  if ((*(byte *)((long)unaff_x20 + 0x34) & 1) == 0) {
    lVar4 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  cVar1 = *(char *)((long)unaff_x20 + 0x35);
  if (cVar1 != '\x03') {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(cVar1);
  }
  lVar4 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1005a38f0;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_1005a38f0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

