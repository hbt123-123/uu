// rea decompile_all
// name: FUN_1002190b0
// address: 0x1002190b0
// body: available
// range: 0x1002190b0-0x1002194ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002194a8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002190b0(long param_1,uint param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined1 *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_e0 [4];
  uint local_dc;
  long local_d8;
  long local_d0;
  undefined1 *local_c8;
  ID local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  char local_89;
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_e0 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a0 = &_OBJC_CLASS___NSFileManager;
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  __sSo13NSFileManagerC10FoundationE10enumerator2at26includingPropertiesForKeys7options12errorHandlerSo21NSDirectoryEnumeratorCSgAC3URLV_SaySo16NSURLResourceKeyaGSgSo0M18EnumerationOptionsVSbAM_s5Error_ptcSgtF
            (param_1,0,0,0,0);
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 != 0) {
    local_b0 = param_1;
    local_a8 = lVar13;
    __sSo12NSEnumeratorC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF(lVar14);
    __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(auStack_88);
    puVar2 = PTR___sypN_100995e88;
    if (local_70 == 0) {
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_dc = param_2;
      local_b8 = lVar15;
      do {
        puVar6 = puVar12;
        _swift_dynamicCast(puVar12,auStack_88,puVar2 + 8,lVar3,6);
        if (((ulong)puVar6 & 1) == 0) {
          (**(code **)(lVar16 + 0x38))(puVar12,1,1,lVar3);
          FUN_100040bb4(puVar12,&DAT_100a766c8,&DAT_10080b1d0);
        }
        else {
          local_d0 = lVar4;
          local_c0 = IVar5;
          (**(code **)(lVar16 + 0x38))(puVar12,0,1,lVar3);
          lVar4 = local_b8;
          puVar6 = puVar12;
          (**(code **)(lVar16 + 0x20))(local_b8,puVar12,lVar3);
          __s10Foundation3URLV4pathSSvg();
          local_89 = '\0';
          pcVar11 = "defaultManager";
          local_d8 = lVar4;
          local_c8 = puVar6;
          IVar7 = _objc_msgSend((ID)local_a0,"defaultManager");
          IVar5 = IVar7;
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar11);
          IVar7 = _objc_msgSend(IVar7,"fileExistsAtPath:isDirectory:",IVar5,&local_89);
          puVar10 = local_98;
          IVar5 = local_c0;
          lVar4 = local_d0;
          if ((int)IVar7 == 0) {
            (**(code **)(lVar16 + 8))(local_b8,lVar3);
            _swift_bridgeObjectRelease(local_c8);
            IVar5 = local_c0;
            lVar4 = local_d0;
          }
          else if ((local_89 == '\x01') && ((local_dc & 1) != 0)) {
            (**(code **)(lVar16 + 8))(local_b8,lVar3);
            _swift_bridgeObjectRelease(local_c8);
          }
          else {
            puVar8 = local_98;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar10;
            if (((ulong)puVar8 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100033898(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
            }
            uVar1 = *(ulong *)(puVar9 + 0x10);
            local_98 = (undefined *)(uVar1 + 1);
            puVar10 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_100033898(puVar10,local_98,1,puVar9);
            }
            *(undefined **)(puVar10 + 0x10) = local_98;
            *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = local_d8;
            *(undefined1 **)(puVar10 + uVar1 * 0x10 + 0x28) = local_c8;
            local_98 = puVar10;
            (**(code **)(lVar16 + 8))(local_b8,lVar3);
            IVar5 = local_c0;
          }
        }
        __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(auStack_88);
      } while (local_70 != 0);
    }
    (**(code **)(local_a8 + 8))(lVar14,lVar4);
    puVar2 = local_98;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar2);
  }
  return;
}

