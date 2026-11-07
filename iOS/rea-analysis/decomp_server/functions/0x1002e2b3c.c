// rea decompile_all
// name: FUN_1002e2b3c
// address: 0x1002e2b3c
// body: available
// range: 0x1002e2b3c-0x1002e2db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002e2d08) */

void FUN_1002e2b3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_88 [24];
  long local_70;
  undefined **ppuStack_68;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = &stack0xffffffffffffff30 + -uVar8;
  lVar12 = (long)puVar11 - uVar8;
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar9 = *(long *)(lVar6 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar12 - uVar8;
  lVar14 = lVar15 - uVar8;
  FUN_1000b142c();
  ppuVar4 = ppuStack_68;
  lVar3 = local_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar10 = *(long *)(unaff_x20 + 0x68);
  FUN_10003f030(auStack_88,local_70);
  pcVar13 = (code *)ppuVar4[1];
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar13)(lVar12,lVar3,ppuVar4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar7 + 0x10))(puVar11,lVar12,lVar5);
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (lVar15,0x404e000000000000,puVar11,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(uVar1,uVar2);
    if (lVar10 != 0) {
      FUN_1002bc258();
    }
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs();
    (**(code **)(lVar7 + 8))(lVar12,lVar5);
    (**(code **)(lVar9 + 0x20))(lVar14,lVar15,lVar6);
    FUN_10003f094(auStack_88);
    if (*(code **)(unaff_x20 + 0x70) != (code *)0x0) {
      (**(code **)(unaff_x20 + 0x70))(lVar14);
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar3 = *(long *)(unaff_x20 + 0x60);
    FUN_10003f030(unaff_x20 + 0x40,uVar1);
    ppuStack_68 = &PTR_PTR_1009af618;
    local_70 = lVar6;
    FUN_1000efc08(auStack_88);
    (**(code **)(lVar9 + 0x10))();
    (**(code **)(lVar3 + 8))(param_1,auStack_88,*(undefined8 *)(unaff_x20 + 0x38),uVar1,lVar3);
    (**(code **)(lVar9 + 8))(lVar14,lVar6);
  }
  else {
    _swift_bridgeObjectRelease(uVar2);
  }
  FUN_10003f094(auStack_88);
  return;
}

