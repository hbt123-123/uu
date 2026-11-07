// rea decompile_all
// name: FUN_1000a7c8c
// address: 0x1000a7c8c
// body: available
// range: 0x1000a7c8c-0x1000a7f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a7c8c(long param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_70;
  long local_68;
  
  if (param_3 != param_2) {
    lVar9 = *param_4;
    puVar13 = (undefined8 *)(lVar9 + param_3 * 0x18);
    param_1 = param_1 - param_3;
    puVar14 = puVar13;
    lVar12 = param_1;
LAB_1000a7d4c:
    do {
      uVar16 = *puVar13;
      uVar17 = puVar13[1];
      bVar1 = *(byte *)(puVar13 + 2);
      puVar15 = puVar13 + -3;
      uVar10 = *puVar15;
      uVar11 = puVar13[-2];
      bVar3 = *(byte *)(puVar13 + -1);
      if (bVar3 >> 6 == 0) {
        local_70 = 0x2d2d;
        local_68 = -0x1e00000000000000;
LAB_1000a7df0:
        FUN_100065610(uVar16,uVar17,bVar1);
        FUN_100065610(uVar10,uVar11,bVar3);
        __sSS6appendyySSF(uVar10,uVar11);
      }
      else {
        if (bVar3 >> 6 != 1) {
          local_70 = 0x2d;
          local_68 = -0x1f00000000000000;
          goto LAB_1000a7df0;
        }
        local_70 = 0;
        local_68 = -0x2000000000000000;
        FUN_100065610(uVar16,uVar17,bVar1);
        FUN_100065610(uVar10,uVar11,bVar3);
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_70,uVar10,uVar11,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      }
      lVar4 = local_68;
      uVar8 = local_70;
      if (bVar1 >> 6 == 0) {
        local_70 = 0x2d2d;
        local_68 = -0x1e00000000000000;
LAB_1000a7e98:
        __sSS6appendyySSF(uVar16,uVar17);
      }
      else {
        if (bVar1 >> 6 != 1) {
          local_70 = 0x2d;
          local_68 = -0x1f00000000000000;
          goto LAB_1000a7e98;
        }
        local_70 = 0;
        local_68 = -0x2000000000000000;
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_70,uVar16,uVar17,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      }
      lVar5 = local_68;
      if ((uVar8 == local_70) && (lVar4 == local_68)) {
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(lVar5);
        FUN_100065628(uVar10,uVar11,bVar3);
        FUN_100065628(uVar16,uVar17,bVar1);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,lVar4,local_70,local_68,1);
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(lVar5);
        FUN_100065628(uVar10,uVar11,bVar3);
        FUN_100065628(uVar16,uVar17,bVar1);
        if ((uVar8 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000a7f48);
            (*pcVar6)();
          }
          uVar2 = *(undefined1 *)(puVar13 + 2);
          uVar17 = puVar13[1];
          uVar16 = *puVar13;
          puVar13[1] = puVar13[-2];
          *puVar13 = *puVar15;
          puVar13[2] = puVar13[-1];
          puVar13[-2] = uVar17;
          puVar13[-3] = uVar16;
          *(undefined1 *)(puVar13 + -1) = uVar2;
          bVar7 = param_1 != -1;
          param_1 = param_1 + 1;
          puVar13 = puVar15;
          if (bVar7) goto LAB_1000a7d4c;
        }
      }
      param_3 = param_3 + 1;
      puVar13 = puVar14 + 3;
      param_1 = lVar12 + -1;
      puVar14 = puVar13;
      lVar12 = param_1;
    } while (param_3 != param_2);
  }
  return;
}

