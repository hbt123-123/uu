// rea decompile_all
// name: FUN_10017d858
// address: 0x10017d858
// body: available
// range: 0x10017d858-0x10017db3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10017db3c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10017d858(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ID IVar9;
  long lVar10;
  undefined1 auStack_90 [16];
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [7];
  char local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar7 + -extraout_x8_00;
  FUN_10017e5cc(puVar8,param_2,param_3);
  puVar3 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,puVar2);
  if ((int)puVar3 == 1) {
    *param_1 = *puVar8;
    _swift_storeEnumTagMultiPayload(param_1,puVar2,1);
    goto LAB_10017db04;
  }
  puVar3 = puVar7;
  puVar4 = puVar8;
  (**(code **)(lVar10 + 0x20))(puVar7,puVar8,lVar1);
  local_69 = '\0';
  IVar9 = *(ID *)(unaff_x20 + 0x10);
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar4);
  IVar9 = _objc_msgSend(IVar9,"fileExistsAtPath:isDirectory:",puVar3,&local_69);
  if ((int)IVar9 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined1 **)(puVar8 + -0x10) = puVar7;
    FUN_1003fb4ec(FUN_1001803a0,puVar8 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                  &DAT_d000000000000013,0x80000001008972b0,0x98,0);
    uVar6 = 10;
LAB_10017dae0:
    *param_1 = uVar6;
    uVar5 = 1;
  }
  else {
    if (local_69 != '\x01') {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined1 **)(puVar8 + -0x10) = puVar7;
      FUN_1003fb4ec(FUN_1001803a8,puVar8 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                    &DAT_d000000000000013,0x80000001008972b0,0x9c,0);
      uVar6 = 4;
      goto LAB_10017dae0;
    }
    (**(code **)(lVar10 + 0x10))(param_1,puVar7,lVar1);
    uVar5 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,puVar2,uVar5);
  (**(code **)(lVar10 + 8))(puVar7,lVar1);
LAB_10017db04:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

