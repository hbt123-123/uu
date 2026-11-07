// rea decompile_all
// name: FUN_100073284
// address: 0x100073284
// body: available
// range: 0x100073284-0x1000735e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100073284(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar14 = *(ulong *)(param_1 + 0x10);
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x20);
    uVar11 = (ulong)uVar10;
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    lVar9 = *param_3;
    uVar12 = uVar11;
    uVar5 = param_2;
    thunk_FUN_1001a2c34();
    lVar6 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar6 + uVar7;
    if (SCARRY8(lVar6,uVar7)) {
LAB_10007352c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100073530);
      (*pcVar3)();
    }
    if (*(long *)(lVar9 + 0x18) < lVar1) {
      uVar7 = (ulong)((uint)param_2 & 1);
      FUN_10006738c(lVar1);
      thunk_FUN_1001a2c34();
      uVar12 = uVar11;
      if (((uint)uVar5 & 1) != ((uint)uVar7 & 1)) {
LAB_100073324:
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss6UInt32VN_100995dc0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100073334);
        (*pcVar3)();
      }
    }
    else {
      uVar7 = uVar5;
      if ((param_2 & 1) == 0) {
        FUN_100063524();
      }
    }
    if ((uVar5 & 1) == 0) {
      lVar6 = *param_3;
      lVar1 = lVar6 + (uVar12 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar12 & 0x3f);
      *(uint *)(*(long *)(lVar6 + 0x30) + uVar12 * 4) = uVar10;
      puVar13 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar12 * 0x10);
      puVar13[1] = uVar16;
      *puVar13 = uVar15;
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
LAB_100073530:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100073534);
        (*pcVar3)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      if (uVar14 != 1) {
        puVar13 = (undefined8 *)(param_1 + 0x40);
        uVar12 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100073538);
            (*pcVar3)();
          }
          uVar10 = *(uint *)(puVar13 + -1);
          uVar11 = (ulong)uVar10;
          uVar16 = puVar13[1];
          uVar15 = *puVar13;
          lVar9 = *param_3;
          uVar5 = uVar11;
          thunk_FUN_1001a2c34();
          lVar6 = *(long *)(lVar9 + 0x10);
          uVar8 = (ulong)~(uint)uVar7 & 1;
          lVar1 = lVar6 + uVar8;
          if (SCARRY8(lVar6,uVar8)) goto LAB_10007352c;
          uVar8 = uVar7;
          if (*(long *)(lVar9 + 0x18) < lVar1) {
            uVar8 = 1;
            FUN_10006738c(lVar1);
            thunk_FUN_1001a2c34();
            uVar5 = uVar11;
            if (((uint)uVar7 & 1) != ((uint)uVar8 & 1)) goto LAB_100073324;
          }
          if ((uVar7 & 1) != 0) goto LAB_100073350;
          lVar6 = *param_3;
          lVar1 = lVar6 + (uVar5 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
          *(uint *)(*(long *)(lVar6 + 0x30) + uVar5 * 4) = uVar10;
          puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar5 * 0x10);
          puVar2[1] = uVar16;
          *puVar2 = uVar15;
          if (SCARRY8(*(long *)(lVar6 + 0x10),1)) goto LAB_100073530;
          uVar12 = uVar12 + 1;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
          puVar13 = puVar13 + 3;
          uVar7 = uVar8;
        } while (uVar14 != uVar12);
      }
      _swift_bridgeObjectRelease(param_1);
    }
    else {
LAB_100073350:
      puVar4 = PTR___ss11_MergeErrorON_100995ae0;
      _swift_allocError(PTR___ss11_MergeErrorON_100995ae0,PTR___ss11_MergeErrorOs0B0sWP_100995ae8,0,
                        0);
      _swift_willThrow();
      _swift_errorRetain(puVar4);
      uVar14 = 0;
      FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
      _swift_dynamicCast();
      if ((uVar14 & 1) != 0) {
        local_70 = 0;
        uStack_68 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x1e);
        __sSS6appendyySSF(0xd00000000000001b,0x800000010087dad0);
        local_74 = uVar10;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_74,&local_70,PTR___ss6UInt32VN_100995dc0,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        __sSS6appendyySSF(0x27,0xe100000000000000);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,local_70,uStack_68,"Swift/arm64e-apple-macos.swiftinterface",
                   0x27,2,0x42b3,0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000735e4);
        (*pcVar3)();
      }
      _swift_bridgeObjectRelease(param_1);
      _swift_errorRelease(puVar4);
    }
  }
  return;
}

