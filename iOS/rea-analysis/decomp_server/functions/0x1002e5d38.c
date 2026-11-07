// rea decompile_all
// name: FUN_1002e5d38
// address: 0x1002e5d38
// body: available
// range: 0x1002e5d38-0x1002e5f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002e5f10) */

void FUN_1002e5d38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = &stack0xffffffffffffff30 + -uVar6;
  lVar9 = (long)puVar8 - uVar6;
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar12 = *(long *)(lVar4 + -8);
  lVar11 = lVar9 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000b142c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  FUN_10003f030(auStack_88,local_70);
  pcVar10 = *(code **)(lStack_68 + 8);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar10)(lVar9,local_70,lStack_68);
  if (unaff_x21 == 0) {
    (**(code **)(lVar5 + 0x10))(puVar8,lVar9,lVar3);
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (lVar11,0x404e000000000000,puVar8,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(uVar1,uVar2);
    if (lVar7 != 0) {
      FUN_1002bc258();
    }
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs();
    (**(code **)(lVar5 + 8))(lVar9,lVar3);
    (**(code **)(lVar12 + 0x20))(param_1,lVar11,lVar4);
    FUN_10003f094(auStack_88);
    if (*(code **)(unaff_x20 + 0x40) != (code *)0x0) {
      (**(code **)(unaff_x20 + 0x40))(param_1);
    }
  }
  else {
    _swift_bridgeObjectRelease(uVar2);
    FUN_10003f094(auStack_88);
  }
  return;
}

