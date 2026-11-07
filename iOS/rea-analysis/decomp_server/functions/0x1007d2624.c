// rea decompile_all
// name: FUN_1007d2624
// address: 0x1007d2624
// body: available
// range: 0x1007d2624-0x1007d288b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007d2624(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong local_110;
  ulong uStack_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar2 = _TtC6Sentry34SentrySRDefaultBreadcrumbConverter::supportedNetworkData;
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  uVar11 = uVar11 + 0x3f >> 6;
  lVar5 = param_1;
  _swift_bridgeObjectRetain();
  lVar15 = 0;
  do {
    if (uVar14 == 0) {
      lVar10 = lVar15 + 1;
      if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007d288c);
        (*pcVar4)();
      }
      if ((long)uVar11 <= lVar10) goto LAB_1007d2854;
      uVar14 = ((ulong *)(param_1 + 0x40))[lVar10];
      if (uVar14 == 0) {
        if ((long)uVar11 <= lVar15 + 2) {
LAB_1007d2854:
          _swift_release(param_1);
          return;
        }
        while (uVar14 = *(ulong *)(lVar5 + 0x50 + lVar15 * 8), uVar14 == 0) {
          lVar15 = lVar15 + 1;
          if (uVar11 - 2 == lVar15) goto LAB_1007d2854;
        }
        lVar10 = lVar15 + 2;
      }
      uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar10 * 0x40;
    }
    else {
      uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar15 << 6;
      lVar10 = lVar15;
    }
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
    local_98 = *puVar1;
    uVar6 = puVar1[1];
    uStack_90 = uVar6;
    FUN_10003e8bc(*(long *)(param_1 + 0x38) + uVar12 * 0x20,&local_88);
    uVar3 = uStack_90;
    uVar12 = local_98;
    uStack_c8 = uStack_90;
    local_d0 = local_98;
    uStack_b8 = uStack_80;
    uStack_c0 = local_88;
    uStack_a8 = uStack_70;
    local_b0 = local_78;
    uVar13 = *(undefined8 *)(param_2 + lVar2);
    _swift_bridgeObjectRetain(uVar6);
    uVar6 = uVar12;
    FUN_100153074(uVar12,uVar3,uVar13);
    if ((uVar6 & 1) != 0) {
      local_110 = uVar12;
      uStack_108 = uVar3;
      local_e0 = 0x2e70747468;
      local_d8 = 0xe500000000000000;
      local_f0 = 0;
      uStack_e8 = 0xe000000000000000;
      FUN_10009ff0c();
      puVar7 = &local_e0;
      puVar8 = &local_f0;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar7,puVar8,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,
                 PTR___sSSN_1009957f8,uVar6,uVar6,uVar6);
      puVar9 = puVar8;
      FUN_1007d136c();
      FUN_10003e8bc(&uStack_c0,&local_110);
      FUN_1007d3fa0(&local_110,puVar7,puVar9);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(puVar9);
    }
    FUN_1007c62b0(&local_d0,&DAT_100abd410);
    lVar15 = lVar10;
  } while( true );
}

