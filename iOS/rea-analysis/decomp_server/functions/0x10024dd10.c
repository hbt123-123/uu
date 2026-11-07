// rea decompile_all
// name: FUN_10024dd10
// address: 0x10024dd10
// body: available
// range: 0x10024dd10-0x10024e09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024e098 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10024dd10(undefined8 param_1,undefined8 param_2)

{
  ID *pIVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  long unaff_x20;
  ID IVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ID aIStack_f0 [5];
  ID local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  FUN_10024e0bc();
  aIStack_f0[1] = *(long *)(lVar3 + -8);
  uVar13 = *(long *)(aIStack_f0[1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  aIStack_f0[4] = (long)aIStack_f0 - uVar13;
  lVar15 = aIStack_f0[4] - uVar13;
  lVar4 = 0;
  aIStack_f0[2] = lVar3;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  lVar16 = lVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar4;
  __s10Foundation3URLV4pathSSvg();
  IVar14 = *(ID *)(unaff_x20 + 0x18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  aIStack_f0[3] = IVar14;
  local_c8 = _objc_msgSend(IVar14,"enumeratorAtPath:",lVar3);
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (local_c8 != 0) {
    while( true ) {
      IVar14 = _objc_msgSend(local_c8,"nextObject");
      if (IVar14 == 0) {
        uStack_a8 = 0;
        local_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0);
        _swift_unknownObjectRelease(IVar14);
      }
      uStack_88 = uStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) break;
      puVar5 = &local_c0;
      _swift_dynamicCast(puVar5,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
      uVar2 = uStack_b8;
      uVar7 = local_c0;
      if (((ulong)puVar5 & 1) == 0) goto LAB_10024e05c;
      uVar6 = local_c0;
      uVar11 = uStack_b8;
      __s10Foundation3URLV22appendingPathComponentyACSSF(lVar16,local_c0,uStack_b8);
      __s10Foundation3URLV4pathSSvg();
      local_90 = local_90 & 0xffffffffffffff00;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar11);
      pcVar12 = "fileExistsAtPath:isDirectory:";
      _objc_msgSend(aIStack_f0[3],"fileExistsAtPath:isDirectory:",uVar6,&local_90);
      IVar14 = 0;
      if ((local_90 & 1) == 0) {
        __s10Foundation3URLV17lastPathComponentSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pcVar12);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        pcVar12 = "stringByAppendingPathComponent:";
        IVar14 = _objc_msgSend(IVar14,"stringByAppendingPathComponent:",uVar7);
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        (**(code **)(lVar17 + 0x10))(lVar15,lVar16,lVar4);
        pIVar1 = (ID *)(lVar15 + *(int *)(aIStack_f0[2] + 0x14));
        *pIVar1 = IVar14;
        pIVar1[1] = (ID)pcVar12;
        FUN_10024e13c(lVar15,aIStack_f0[4]);
        puVar8 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar10;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_10024e270(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
        }
        uVar13 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar13) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_10024e270(puVar10,uVar13 + 1,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar13 + 1;
        FUN_10024e3ec(aIStack_f0[4],
                      puVar10 + *(long *)(aIStack_f0[1] + 0x48) * uVar13 +
                                ((ulong)*(byte *)(aIStack_f0[1] + 0x50) + 0x20 &
                                ((ulong)*(byte *)(aIStack_f0[1] + 0x50) ^ 0xffffffffffffffff)));
        FUN_10024e430(lVar15);
        (**(code **)(lVar17 + 8))(lVar16,lVar4);
      }
      else {
        (**(code **)(lVar17 + 8))(lVar16,lVar4);
        _swift_bridgeObjectRelease(uVar2);
      }
    }
    FUN_10024e0f4(&local_90);
  }
LAB_10024e05c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar10;
}

