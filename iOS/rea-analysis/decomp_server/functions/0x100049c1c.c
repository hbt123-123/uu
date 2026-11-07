// rea decompile_all
// name: FUN_100049c1c
// address: 0x100049c1c
// body: available
// range: 0x100049c1c-0x10004a19f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100049c1c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined1 uVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_100 [16];
  ulong *local_f0;
  undefined *local_e8;
  ulong *local_e0;
  undefined **ppuStack_d8;
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [16];
  ulong *local_90;
  undefined *local_88;
  undefined8 local_80;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  uVar7 = 0;
  FUN_100401b14();
  local_90 = param_2;
  FUN_1003fb48c(FUN_10004af54,auStack_a0,0xd0000000000000a5,0x800000010087d1a0,0xd000000000000017,
                0x800000010087d340,0x75,0);
  IVar8 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  local_80 = 0;
  local_78 = 0;
  local_88 = (undefined *)0xb;
  IVar8 = NSProcessInfo::isOperatingSystemAtLeastVersion_
                    (IVar8,"isOperatingSystemAtLeastVersion:",&local_88);
  IVar9 = 0;
  if ((int)IVar8 == 0) {
    FUN_1003fb48c(FUN_10004a5a8,0,0xd0000000000000a5,0x800000010087d1a0,0xd000000000000017,
                  0x800000010087d340,0x77,0);
    uVar18 = 0;
    uVar14 = 0;
    uVar21 = 0;
    uVar16 = 1;
    puVar15 = (undefined *)0x2711;
    uVar6 = 0;
  }
  else {
    thunk_FUN_10000286c();
    if ((int)IVar9 == 0) {
      FUN_1003fb48c(FUN_10004a5d4,0,0xd0000000000000a5,0x800000010087d1a0,0xd000000000000017,
                    0x800000010087d340,0x7b,0);
      uVar18 = 0;
      uVar14 = 0;
      uVar21 = 0;
      uVar6 = 0;
      uVar16 = 1;
      puVar15 = (undefined *)0x2712;
    }
    else {
      local_b8 = "tend rejected displayID:";
      uVar18 = param_2[5];
      lVar20 = *(long *)(uVar18 + 0x10);
      local_c0 = "ace- provider disconnect slot:";
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_b0 = uVar7;
      if (lVar20 != 0) {
        local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10006fc1c(0,lVar20,0);
        pauVar19 = (undefined1 (*) [16])(uVar18 + 0x20);
        do {
          puVar15 = local_88;
          auVar22 = NEON_scvtf(*pauVar19,8);
          IVar9 = NSValue::valueWithSize_
                            ((ID)&_OBJC_CLASS___NSValue,"valueWithSize:",auVar22._0_8_,auVar22._8_8_
                            );
          uVar18 = *(ulong *)(puVar15 + 0x10);
          local_88 = puVar15;
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
            FUN_10006fc1c(1 < *(ulong *)(puVar15 + 0x18),uVar18 + 1,1);
          }
          *(ulong *)(local_88 + 0x10) = uVar18 + 1;
          *(ID *)(local_88 + uVar18 * 8 + 0x20) = IVar9;
          pauVar19 = pauVar19 + 1;
          lVar20 = lVar20 + -1;
          puVar10 = local_88;
        } while (lVar20 != 0);
      }
      puVar15 = (undefined *)param_2[3];
      if (0x7fffffff < (long)puVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a188);
        (*pcVar4)();
      }
      uVar17 = param_2[4];
      if (0x7fffffff < (long)uVar17) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a18c);
        (*pcVar4)();
      }
      if ((((long)puVar15 < -0x80000000) || ((long)uVar17 < -0x80000000)) ||
         (uVar18 = param_2[6], (long)uVar18 < -0x80000000)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a190);
        (*pcVar4)();
      }
      if (0x7fffffff < (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a194);
        (*pcVar4)();
      }
      local_c8 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar21 = *param_2;
      if (((param_2[9] & 1) != 0) && (bVar5 = SCARRY8(uVar21,1000), uVar21 = uVar21 + 1000, bVar5))
      {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a1a0);
        (*pcVar4)();
      }
      if ((long)uVar21 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a198);
        (*pcVar4)();
      }
      if (0x7fffffff < (long)uVar21) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004a19c);
        (*pcVar4)();
      }
      uVar14 = param_2[8];
      if (0x7ffffffe < (long)uVar14) {
        uVar14 = 0x7fffffff;
      }
      if ((long)uVar14 < -0x7fffffff) {
        uVar14 = 0xffffffff80000000;
      }
      uVar3 = param_2[7];
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      FUN_100049aec();
      ppuStack_d8 = &PTR_PTR_100998240;
      local_f0 = (ulong *)CONCAT44((int)uVar14,(int)uVar21);
      local_e8 = puVar10;
      local_e0 = (ulong *)IVar9;
      FUN_100049b0c(puVar15,uVar17,0x2000,0x1400,(char)uVar3,uVar1,uVar2,uVar18);
      _swift_bridgeObjectRelease(puVar10);
      if (puVar15 == (undefined *)0x0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_e8 = (undefined *)0x0;
        local_e0 = (ulong *)CONCAT44(local_e0._4_4_,(int)uVar17);
        local_f0 = param_2;
        FUN_1003fb48c(FUN_10004af5c,auStack_100,0xd0000000000000a5,
                      (ulong)local_c0 | 0x8000000000000000,0xd000000000000017,
                      (ulong)local_b8 | 0x8000000000000000,0x90,0);
        uVar18 = 0;
        uVar14 = 0;
        uVar21 = 0;
        uVar6 = 0;
        uVar16 = 1;
        puVar15 = (undefined *)(uVar17 & 0xffffffff);
      }
      else {
        puVar10 = puVar15;
        FUN_100003d20();
        if ((int)puVar10 == 0) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_e0 = param_2;
          FUN_1003fb48c(FUN_10004af70,&local_f0,0xd0000000000000a5,
                        (ulong)local_c0 | 0x8000000000000000,0xd000000000000017,
                        (ulong)local_b8 | 0x8000000000000000,0x96,0);
          FUN_100004030(puVar15);
          uVar18 = 0;
          uVar14 = 0;
          uVar21 = 0;
          uVar6 = 0;
          uVar16 = 1;
          puVar15 = (undefined *)0x2713;
        }
        else {
          uVar14 = *param_2;
          puVar11 = puVar15;
          FUN_100003dc0();
          puVar12 = puVar15;
          FUN_100003e1c();
          puVar13 = puVar15;
          FUN_100003e78();
          local_80 = CONCAT44(local_80._4_4_,(int)puVar10);
          local_70 = SUB84(puVar11,0);
          uStack_6c = SUB84(puVar12,0);
          uVar6 = SUB84(puVar13,0);
          local_88 = puVar15;
          local_78 = uVar14;
          local_68 = uVar6;
          (*(code *)PTR____chkstk_darwin_100995498)();
          ppuStack_d8 = &local_88;
          local_e0 = param_2;
          FUN_1003fb48c(FUN_10004af68,&local_f0,0xd0000000000000a5,
                        (ulong)local_c0 | 0x8000000000000000,0xd000000000000017,
                        (ulong)local_b8 | 0x8000000000000000,0xa3,0);
          uVar16 = 0;
          uVar18 = (ulong)puVar10 & 0xffffffff;
          uVar21 = (ulong)puVar11 & 0xffffffff | (long)puVar12 << 0x20;
        }
      }
    }
  }
  *param_1 = (ulong)puVar15;
  param_1[1] = uVar18;
  param_1[2] = uVar14;
  param_1[3] = uVar21;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined1 *)((long)param_1 + 0x24) = uVar16;
  return;
}

