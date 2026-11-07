// rea decompile_all
// name: FUN_100072e54
// address: 0x100072e54
// body: available
// range: 0x100072e54-0x100073283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100072e54(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_1000731cc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000731d0);
      (*pcVar3)();
    }
    uStack_7f = (undefined7)*(undefined8 *)(param_1 + 0x51);
    uStack_78 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x51) >> 0x38);
    uVar2 = uStack_78;
    uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x49) >> 0x38);
    uVar15 = *(ulong *)(param_1 + 0x38);
    uVar14 = *(ulong *)(param_1 + 0x30);
    uVar18 = *(ulong *)(param_1 + 0x48);
    uVar16 = *(ulong *)(param_1 + 0x40);
    uStack_88 = (undefined1)uVar18;
    local_87 = (undefined7)(uVar18 >> 8);
    uVar19 = *(ulong *)(param_1 + 0x28);
    uVar17 = *(ulong *)(param_1 + 0x20);
    uVar13 = CONCAT71(uStack_7f,uStack_80);
    local_b0 = uVar17;
    uStack_a8 = uVar19;
    local_a0 = uVar14;
    uStack_98 = uVar15;
    uStack_90 = uVar16;
    FUN_10007f314(&local_b0,&local_f0,&DAT_100a75948,&DAT_10080a990);
    if (uVar19 != 0) {
      lVar12 = *param_3;
      uVar20 = uVar17;
      uVar5 = uVar19;
      FUN_1001a2c70();
      lVar7 = *(long *)(lVar12 + 0x10);
      uVar8 = (ulong)~(uint)uVar5 & 1;
      lVar1 = lVar7 + uVar8;
      if (SCARRY8(lVar7,uVar8)) {
LAB_1000731d0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000731d4);
        (*pcVar3)();
      }
      if (*(long *)(lVar12 + 0x18) < lVar1) {
        FUN_1000670cc(lVar1,param_2 & 1);
        uVar20 = uVar17;
        uVar8 = uVar19;
        FUN_1001a2c70();
        if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_100072f48:
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100072f58);
          (*pcVar3)();
        }
      }
      else if ((param_2 & 1) == 0) {
        FUN_100063390();
      }
      if ((uVar5 & 1) != 0) {
LAB_100072f60:
        puVar4 = PTR___ss11_MergeErrorON_100995ae0;
        _swift_allocError(PTR___ss11_MergeErrorON_100995ae0,PTR___ss11_MergeErrorOs0B0sWP_100995ae8,
                          0,0);
        _swift_willThrow();
        _swift_errorRetain(puVar4);
        uVar6 = 0;
        FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
        _swift_dynamicCast();
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(param_1);
          _swift_bridgeObjectRelease(uVar19);
          _swift_errorRelease(puVar4);
          return;
        }
        local_b0 = 0;
        uStack_a8 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x1e);
        __sSS6appendyySSF(0xd00000000000001b,0x800000010087dad0);
        local_f0 = uVar17;
        uStack_e8 = uVar19;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_f0,&local_b0,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        __sSS6appendyySSF(0x27,0xe100000000000000);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,local_b0,uStack_a8,"Swift/arm64e-apple-macos.swiftinterface",
                   0x27,2,0x42b3,0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100073284);
        (*pcVar3)();
      }
      lVar7 = *param_3;
      lVar1 = lVar7 + (uVar20 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar20 & 0x3f);
      puVar9 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar20 * 0x10);
      *puVar9 = uVar17;
      puVar9[1] = uVar19;
      puVar9 = (ulong *)(*(long *)(lVar7 + 0x38) + uVar20 * 0x30);
      puVar9[1] = uVar15;
      *puVar9 = uVar14;
      puVar9[3] = uVar18;
      puVar9[2] = uVar16;
      puVar9[4] = uVar13;
      *(undefined1 *)(puVar9 + 5) = uVar2;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_1000731d4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000731d8);
        (*pcVar3)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      if (uVar6 != 1) {
        puVar9 = (ulong *)(param_1 + 0x60);
        uVar13 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar13) goto LAB_1000731cc;
          uStack_7f = (undefined7)*(undefined8 *)((long)puVar9 + 0x31);
          uStack_78 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0x31) >> 0x38);
          uVar2 = uStack_78;
          uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0x29) >> 0x38);
          uVar16 = puVar9[3];
          uVar15 = puVar9[2];
          uVar20 = puVar9[5];
          uVar18 = puVar9[4];
          uStack_88 = (undefined1)uVar20;
          local_87 = (undefined7)(uVar20 >> 8);
          uVar19 = puVar9[1];
          uVar17 = *puVar9;
          uVar14 = CONCAT71(uStack_7f,uStack_80);
          local_b0 = uVar17;
          uStack_a8 = uVar19;
          local_a0 = uVar15;
          uStack_98 = uVar16;
          uStack_90 = uVar18;
          FUN_10007f314(&local_b0,&local_f0,&DAT_100a75948,&DAT_10080a990);
          if (uVar19 == 0) break;
          lVar12 = *param_3;
          uVar5 = uVar17;
          uVar8 = uVar19;
          FUN_1001a2c70();
          lVar7 = *(long *)(lVar12 + 0x10);
          uVar10 = (ulong)~(uint)uVar8 & 1;
          lVar1 = lVar7 + uVar10;
          if (SCARRY8(lVar7,uVar10)) goto LAB_1000731d0;
          if (*(long *)(lVar12 + 0x18) < lVar1) {
            FUN_1000670cc(lVar1,1);
            uVar5 = uVar17;
            uVar10 = uVar19;
            FUN_1001a2c70();
            if (((uint)uVar8 & 1) != ((uint)uVar10 & 1)) goto LAB_100072f48;
          }
          if ((uVar8 & 1) != 0) goto LAB_100072f60;
          lVar7 = *param_3;
          lVar1 = lVar7 + (uVar5 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
          puVar11 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
          *puVar11 = uVar17;
          puVar11[1] = uVar19;
          puVar11 = (ulong *)(*(long *)(lVar7 + 0x38) + uVar5 * 0x30);
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11[3] = uVar20;
          puVar11[2] = uVar18;
          puVar11[4] = uVar14;
          *(undefined1 *)(puVar11 + 5) = uVar2;
          if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_1000731d4;
          uVar13 = uVar13 + 1;
          *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
          puVar9 = puVar9 + 8;
        } while (uVar6 != uVar13);
      }
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}

