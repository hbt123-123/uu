// rea decompile_all
// name: FUN_100224698
// address: 0x100224698
// body: available
// range: 0x100224698-0x10022496b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100224760) */

bool FUN_100224698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ID IVar9;
  undefined8 uVar10;
  ID self;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  undefined8 local_a0;
  ulong local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uVar5 = 0;
  local_78 = param_1;
  FUN_10022b35c();
  puVar6 = &DAT_100a7e7b8;
  FUN_100005c90(&DAT_100a7e7b8,FUN_10022b35c,&TargetProtocolConformanceDescriptor_100813960);
  puVar7 = &local_78;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar7,uVar5,puVar6);
  _swift_release(uVar4);
  puVar8 = puVar7;
  uVar11 = uVar5;
  FUN_100224268();
  bVar2 = uVar11 >> 0x3c < 0xf;
  if (bVar2) {
    local_78 = 0xd00000000000001f;
    local_70 = 0x80000001008a61a0;
    local_98 = uVar11;
    puStack_90 = puVar8;
    local_80 = uVar5;
    __sSS6appendyySSF(param_2,param_3);
    uVar4 = local_70;
    local_a0 = local_78;
    local_78 = 0xd000000000000023;
    local_70 = 0x80000001008a6170;
    __sSS6appendyySSF(param_2,param_3);
    uVar1 = local_70;
    local_88 = local_78;
    IVar9 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar8,uVar11);
    uVar10 = local_a0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_a0,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    NSUserDefaults::setObject_forKey_(IVar9,"setObject:forKey:",puVar8,uVar10);
    self = NSUserDefaults::standardUserDefaults
                     ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar9 = self;
    __s10Foundation4DateVACycfC(lVar12);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar12,lVar3);
    uVar4 = local_88;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_88,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    NSUserDefaults::setObject_forKey_(self,"setObject:forKey:",IVar9,uVar4);
    FUN_100006cdc(puVar7,local_80);
    FUN_100006cc8(puStack_90,local_98);
  }
  else {
    FUN_100006cdc(puVar7,uVar5);
  }
  return bVar2;
}

