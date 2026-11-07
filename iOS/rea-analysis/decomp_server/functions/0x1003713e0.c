// rea decompile_all
// name: FUN_1003713e0
// address: 0x1003713e0
// body: available
// range: 0x1003713e0-0x10037159b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003713e0(undefined8 param_1,undefined8 param_2,char param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar9 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  (**(code **)(lVar13 + 0x10))(auStack_80 + -(lVar10 + 0xfU & 0xfffffffffffffff0),param_2,lVar9);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (param_1,0x404e000000000000,auStack_80 + -(lVar10 + 0xfU & 0xfffffffffffffff0),0);
  __s10Foundation10URLRequestV10httpMethodSSSgvs
            (*(undefined8 *)("OPTIONS" + (long)param_3 * 8),
             *(undefined8 *)(&DAT_10081d390 + (long)param_3 * 8));
  if (param_4 != 0) {
    lVar10 = 0;
    uVar12 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((long)uVar12 < 0x40) {
      uVar14 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar14 = uVar14 & *(ulong *)(param_4 + 0x40);
    local_78 = lVar13;
    local_70 = lVar9;
    local_68 = param_2;
    while( true ) {
      for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
        uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = lVar10 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar11);
        puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar11);
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        uVar4 = *puVar2;
        uVar6 = puVar2[1];
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
                  (uVar4,uVar6,uVar3,uVar5);
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(uVar6);
      }
      bVar8 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10037159c);
        (*pcVar7)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar10) break;
      uVar14 = ((ulong *)(param_4 + 0x40))[lVar10];
    }
    _swift_release(param_4);
    param_2 = local_68;
    lVar9 = local_70;
    lVar13 = local_78;
  }
  (**(code **)(lVar13 + 8))(param_2,lVar9);
  return;
}

