// rea decompile_all
// name: FUN_100686eb4
// address: 0x100686eb4
// body: available
// range: 0x100686eb4-0x100687393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100687390 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100686eb4(void)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *self;
  undefined *puVar13;
  long lVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ID local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  ID local_100 [3];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  long local_70;
  undefined1 uVar3;
  undefined1 uVar4;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar13 = (undefined *)0x0;
  if (*(char *)((long)unaff_x20 + 0x31) == '\x03') {
    lVar14 = *unaff_x20;
    lVar15 = *(long *)(lVar14 + 0x10);
    puVar13 = puVar5;
    if (lVar15 != 0) {
      FUN_10068ca28(0,lVar15,0);
      puVar10 = puVar5;
      do {
        lVar14 = lVar14 + 0x20;
        FUN_10003e8bc(lVar14,auStack_90);
        FUN_10003e8bc(auStack_90,auStack_b0);
        FUN_10003e8bc(auStack_b0,auStack_d0);
        puVar7 = &local_e0;
        _swift_dynamicCast(puVar7,auStack_d0,PTR___sypN_100995e88 + 8,
                           PTR___s10Foundation4DataVN_1009961e8,0);
        uVar6 = uStack_d8;
        uVar11 = local_e0;
        if ((int)puVar7 == 0) {
          FUN_10003e8bc(auStack_b0,local_100);
          puStack_178 = PTR___swiftEmptyDictionarySingleton_100995ea8;
          local_170 = 0;
          local_168 = 0xe000000000000000;
          local_180 = puVar10;
          FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
          uVar11 = 0;
          __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
          puVar10 = &_OBJC_CLASS___NSNull;
          uStack_160 = uVar11;
          _objc_allocWithZone();
          local_158 = _objc_msgSend((ID)puVar10,"init");
          local_150 = 0x500;
          local_14e = 6;
          FUN_10003e8bc(local_100,auStack_120);
          FUN_10067f3d8(auStack_120);
          FUN_10003f094(local_100);
          FUN_10003f094(auStack_b0);
          FUN_10003f094(auStack_90);
LAB_1006872b0:
          uStack_1b8 = uStack_160;
          local_1c0 = local_168;
          puStack_1a8 = puStack_178;
          puStack_1b0 = local_180;
          IVar8 = local_158;
          uVar9 = local_170;
          uVar2 = (undefined1)local_150;
          uVar3 = local_150._1_1_;
          uVar4 = local_14e;
        }
        else {
          FUN_100008184(local_e0,uStack_d8);
          uVar9 = uVar11;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar11,uVar6);
          local_180 = (undefined *)0x0;
          IVar8 = NSJSONSerialization::JSONObjectWithData_options_error_
                            ((ID)&_OBJC_CLASS___NSJSONSerialization,
                             "JSONObjectWithData:options:error:",uVar9,0,&local_180);
          if (IVar8 == 0) {
            puVar12 = local_180;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_180);
            _swift_willThrow(0);
            FUN_100006cdc(uVar11,uVar6);
            self = &_OBJC_CLASS___NSNull;
            _objc_allocWithZone();
            IVar8 = _objc_msgSend((ID)self,"init");
            uVar9 = 0;
            FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
            local_180 = puVar10;
            local_100[0] = IVar8;
            local_e8 = uVar9;
            FUN_10068dedc();
            local_170 = 0;
            local_168 = 0xe000000000000000;
            puStack_178 = puVar10;
            FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
            uVar9 = 0;
            __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
            puVar10 = &_OBJC_CLASS___NSNull;
            uStack_160 = uVar9;
            _objc_allocWithZone();
            local_158 = _objc_msgSend((ID)puVar10,"init");
            local_150 = 0x500;
            local_14e = 6;
            FUN_10003e8bc(local_100,auStack_120);
            FUN_10067f3d8(auStack_120);
            _swift_errorRelease(puVar12);
            FUN_100006cdc(uVar11,uVar6);
            FUN_10003f094(auStack_b0);
            FUN_10003f094(auStack_90);
            FUN_10003f094(local_100);
            goto LAB_1006872b0;
          }
          __ss018_bridgeAnyObjectToB0yypyXlSgF(local_100,IVar8);
          _swift_unknownObjectRelease(IVar8);
          FUN_10003e8bc(local_100,auStack_120);
          local_180 = puVar10;
          FUN_10068dedc();
          local_170 = 0;
          local_168 = 0xe000000000000000;
          puStack_178 = puVar10;
          FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
          uVar9 = 0;
          __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
          puVar10 = &_OBJC_CLASS___NSNull;
          uStack_160 = uVar9;
          _objc_allocWithZone();
          local_158 = _objc_msgSend((ID)puVar10,"init");
          local_150 = 0x500;
          local_14e = 6;
          FUN_10003e8bc(auStack_120,auStack_140);
          FUN_10067f3d8(auStack_140);
          FUN_10003f094(auStack_120);
          FUN_100006cdc(uVar11,uVar6);
          uVar4 = local_14e;
          IVar8 = local_158;
          uVar9 = local_170;
          uStack_1b8 = uStack_160;
          local_1c0 = local_168;
          puStack_1a8 = puStack_178;
          puStack_1b0 = local_180;
          uVar2 = (undefined1)local_150;
          uVar3 = local_150._1_1_;
          FUN_10003f094(local_100);
          FUN_100006cdc(uVar11,uVar6);
          FUN_10003f094(auStack_b0);
          FUN_10003f094(auStack_90);
        }
        FUN_10003f094(auStack_d0);
        uVar1 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          FUN_10068ca28(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar5 + uVar1 * 0x38 + 0x28) = puStack_1a8;
        *(undefined **)(puVar5 + uVar1 * 0x38 + 0x20) = puStack_1b0;
        *(undefined8 *)(puVar5 + uVar1 * 0x38 + 0x30) = uVar9;
        *(undefined8 *)(puVar5 + uVar1 * 0x38 + 0x40) = uStack_1b8;
        *(undefined8 *)(puVar5 + uVar1 * 0x38 + 0x38) = local_1c0;
        *(ID *)(puVar5 + uVar1 * 0x38 + 0x48) = IVar8;
        puVar5[uVar1 * 0x38 + 0x50] = uVar2;
        puVar5[uVar1 * 0x38 + 0x51] = uVar3;
        puVar5[uVar1 * 0x38 + 0x52] = uVar4;
        lVar15 = lVar15 + -1;
        puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
      } while (lVar15 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar13);
  }
  return;
}

