// rea decompile_all
// name: FUN_1000a81bc
// address: 0x1000a81bc
// body: available
// range: 0x1000a81bc-0x1000a8803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1000a81bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_70;
  long local_68;
  
  lVar9 = ((long)param_2 - (long)param_1) / 0x18;
  lVar1 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar9 < lVar1) {
    if ((param_4 != param_1) || (param_1 + lVar9 * 3 <= param_4)) {
      _memmove(param_4,param_1,lVar9 * 0x18);
    }
    puVar10 = param_4 + lVar9 * 3;
    puVar6 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar16 = *param_2;
        uVar12 = param_2[1];
        bVar2 = *(byte *)(param_2 + 2);
        uVar17 = *param_4;
        uVar14 = param_4[1];
        bVar3 = *(byte *)(param_4 + 2);
        if (bVar3 >> 6 == 0) {
          local_70 = 0x2d2d;
          local_68 = -0x1e00000000000000;
LAB_1000a830c:
          FUN_100065610(uVar16,uVar12,bVar2);
          FUN_100065610(uVar17,uVar14,bVar3);
          __sSS6appendyySSF(uVar17,uVar14);
        }
        else {
          if (bVar3 >> 6 != 1) {
            local_70 = 0x2d;
            local_68 = -0x1f00000000000000;
            goto LAB_1000a830c;
          }
          local_70 = 0;
          local_68 = -0x2000000000000000;
          FUN_100065610(uVar16,uVar12,bVar2);
          FUN_100065610(uVar17,uVar14,bVar3);
          __sSS6appendyySSF(0x2d,0xe100000000000000);
          __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                    (&local_70,uVar17,uVar14,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        }
        lVar9 = local_68;
        uVar13 = local_70;
        if (bVar2 >> 6 == 0) {
          local_70 = 0x2d2d;
          local_68 = -0x1e00000000000000;
LAB_1000a83ac:
          __sSS6appendyySSF(uVar16,uVar12);
        }
        else {
          if (bVar2 >> 6 != 1) {
            local_70 = 0x2d;
            local_68 = -0x1f00000000000000;
            goto LAB_1000a83ac;
          }
          local_70 = 0;
          local_68 = -0x2000000000000000;
          __sSS6appendyySSF(0x2d,0xe100000000000000);
          __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                    (&local_70,uVar16,uVar12,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        }
        lVar1 = local_68;
        if ((uVar13 == local_70) && (lVar9 == local_68)) {
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease(lVar1);
          FUN_100065628(uVar17,uVar14,bVar3);
          FUN_100065628(uVar16,uVar12,bVar2);
LAB_1000a8470:
          puVar8 = param_4;
          param_4 = param_4 + 3;
          puVar15 = param_2;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar13,lVar9,local_70,local_68,1);
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease(lVar1);
          FUN_100065628(uVar17,uVar14,bVar3);
          FUN_100065628(uVar16,uVar12,bVar2);
          if ((uVar13 & 1) == 0) goto LAB_1000a8470;
          puVar15 = param_2 + 3;
          puVar8 = param_2;
        }
        if (puVar6 != puVar8) {
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          puVar6[2] = puVar8[2];
          puVar6[1] = uVar17;
          *puVar6 = uVar16;
        }
        puVar6 = puVar6 + 3;
        param_2 = puVar15;
      } while (param_4 < puVar10);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar1 * 3 <= param_4)) {
      _memmove(param_4,param_2,lVar1 * 0x18);
    }
    puVar10 = param_4 + lVar1 * 3;
    puVar6 = param_2;
    if ((0x17 < (long)param_3 - (long)param_2) && (param_1 < param_2)) {
LAB_1000a8508:
      puVar8 = puVar10;
      lVar9 = 0;
      puVar15 = param_2 + -3;
      do {
        lVar1 = (long)puVar8 + lVar9;
        uVar14 = *(undefined8 *)(lVar1 + -0x18);
        uVar12 = *(undefined8 *)(lVar1 + -0x10);
        bVar2 = *(byte *)(lVar1 + -8);
        uVar16 = param_2[-3];
        uVar17 = param_2[-2];
        bVar3 = *(byte *)(param_2 + -1);
        if (bVar3 >> 6 == 0) {
          local_70 = 0x2d2d;
          local_68 = -0x1e00000000000000;
LAB_1000a85e8:
          FUN_100065610(uVar14,uVar12,bVar2);
          FUN_100065610(uVar16,uVar17,bVar3);
          __sSS6appendyySSF(uVar16,uVar17);
        }
        else {
          if (bVar3 >> 6 != 1) {
            local_70 = 0x2d;
            local_68 = -0x1f00000000000000;
            goto LAB_1000a85e8;
          }
          local_70 = 0;
          local_68 = -0x2000000000000000;
          FUN_100065610(uVar14,uVar12,bVar2);
          FUN_100065610(uVar16,uVar17,bVar3);
          __sSS6appendyySSF(0x2d,0xe100000000000000);
          __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                    (&local_70,uVar16,uVar17,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        }
        lVar4 = local_68;
        uVar13 = local_70;
        if (bVar2 >> 6 == 0) {
          local_70 = 0x2d2d;
          local_68 = -0x1e00000000000000;
LAB_1000a868c:
          __sSS6appendyySSF(uVar14,uVar12);
        }
        else {
          if (bVar2 >> 6 != 1) {
            local_70 = 0x2d;
            local_68 = -0x1f00000000000000;
            goto LAB_1000a868c;
          }
          local_70 = 0;
          local_68 = -0x2000000000000000;
          __sSS6appendyySSF(0x2d,0xe100000000000000);
          __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                    (&local_70,uVar14,uVar12,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        }
        lVar5 = local_68;
        if ((uVar13 == local_70) && (lVar4 == local_68)) {
          uVar13 = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar13,lVar4,local_70,local_68,1);
        }
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(lVar5);
        puVar6 = (undefined8 *)((long)param_3 + lVar9);
        puVar11 = puVar6 + -3;
        FUN_100065628(uVar16,uVar17,bVar3);
        FUN_100065628(uVar14,uVar12,bVar2);
        if ((uVar13 & 1) != 0) goto LAB_1000a8748;
        if ((long)param_3 + lVar9 != lVar1) {
          uVar17 = *(undefined8 *)(lVar1 + -0x10);
          uVar16 = *(undefined8 *)(lVar1 + -0x18);
          puVar6[-1] = *(undefined8 *)(lVar1 + -8);
          puVar6[-2] = uVar17;
          *puVar11 = uVar16;
        }
        lVar9 = lVar9 + -0x18;
        puVar10 = (undefined8 *)((long)puVar8 + lVar9);
        puVar6 = param_2;
        if (puVar10 <= param_4) break;
      } while( true );
    }
  }
LAB_1000a879c:
  lVar9 = (long)puVar10 - (long)param_4;
  sVar7 = (((ulong)(lVar9 / 6 + (lVar9 >> 0x3f)) >> 2) - (lVar9 >> 0x3f)) * 0x18;
  if ((puVar6 != param_4) || ((undefined8 *)((long)puVar10 + (sVar7 - lVar9)) <= puVar6)) {
    _memmove(puVar6,param_4,sVar7);
  }
  return 1;
LAB_1000a8748:
  if (puVar6 != param_2) {
    uVar17 = param_2[-2];
    uVar16 = *puVar15;
    puVar6[-1] = param_2[-1];
    puVar6[-2] = uVar17;
    *puVar11 = uVar16;
  }
  if (((undefined8 *)((long)puVar8 + lVar9) <= param_4) ||
     (puVar10 = (undefined8 *)((long)puVar8 + lVar9), param_3 = puVar11, param_2 = puVar15,
     puVar15 <= param_1)) goto LAB_1000a8790;
  goto LAB_1000a8508;
LAB_1000a8790:
  puVar10 = (undefined8 *)((long)puVar8 + lVar9);
  puVar6 = puVar15;
  goto LAB_1000a879c;
}

