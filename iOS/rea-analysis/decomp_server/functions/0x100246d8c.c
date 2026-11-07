// rea decompile_all
// name: FUN_100246d8c
// address: 0x100246d8c
// body: available
// range: 0x100246d8c-0x100247017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100246d8c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double dStack_80;
  long local_78;
  
  puVar2 = &DAT_100a7e450;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_b0 - extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar9 - extraout_x12;
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = DAT_100a7fa18;
  uVar5 = DAT_100a7fa10;
  _swift_bridgeObjectRetain(DAT_100a7fa18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  IVar4 = NSUserDefaults::valueForKey_(IVar4,"valueForKey:",uVar5);
  if (IVar4 == 0) {
    uStack_a8 = 0;
    local_b0 = 0;
    lStack_98 = 0;
    dStack_a0 = 0.0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0,IVar4);
    _swift_unknownObjectRelease(IVar4);
  }
  uStack_88 = uStack_a8;
  local_90 = local_b0;
  local_78 = lStack_98;
  dStack_80 = dStack_a0;
  if (lStack_98 == 0) {
    FUN_100040bb4(&local_90,&DAT_100a7e460,&DAT_1008134b8);
    (**(code **)(lVar11 + 0x38))(lVar7,1,1,lVar3);
  }
  else {
    lVar6 = lVar7;
    dVar12 = dStack_a0;
    _swift_dynamicCast(lVar7,&local_90,PTR___sypN_100995e88 + 8,lVar3,6);
    (**(code **)(lVar11 + 0x38))(lVar7,(uint)lVar6 ^ 1,1,lVar3);
    lVar6 = lVar7;
    (**(code **)(lVar11 + 0x30))(lVar7,1,lVar3);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar11 + 0x20))(lVar10,lVar7,lVar3);
      __s10Foundation4DateVACycfC(lVar9);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar10);
      pcVar8 = *(code **)(lVar11 + 8);
      (*pcVar8)(lVar9,lVar3);
      (*pcVar8)(lVar10,lVar3);
      return 86400.0 < dVar12;
    }
  }
  FUN_100040bb4(lVar7,&DAT_100a7e450,&DAT_100813ef0);
  return true;
}

