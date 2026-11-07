// rea decompile_all
// name: FUN_10002c5c4
// address: 0x10002c5c4
// body: available
// range: 0x10002c5c4-0x10002c8c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_10002c5c4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  long lStack_68;
  
  lVar1 = 0;
  __s10Foundation8TimeZoneVMa();
  local_70 = *(long *)(lVar1 + -8);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(local_70 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation6LocaleVMa();
  lVar7 = *(long *)(lVar1 + -8);
  local_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100101b10;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar6 - extraout_x8_01;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1000133cc(param_1,lVar11,&DAT_100101b10,&DAT_1000cb700);
  lVar1 = lVar11;
  (**(code **)(lVar10 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_10001fc18(lVar11,&DAT_100101b10,&DAT_1000cb700);
    pcVar5 = (char *)0xe700000000000000;
    puVar3 = (undefined *)0x6e776f6e6b6e75;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,lVar11,lVar2);
    puVar3 = &_OBJC_CLASS___NSDateFormatter;
    _objc_allocWithZone(&_OBJC_CLASS___NSDateFormatter);
    _objc_msgSend();
    uVar4 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000001000c59d0);
    _objc_msgSend(puVar3,"setDateFormat:",uVar4);
    uVar4 = 0x4f505f53555f6e65;
    __s10Foundation6LocaleV10identifierACSS_tcfC(lVar6,0x4f505f53555f6e65,0xeb00000000584953);
    __s10Foundation6LocaleV19_bridgeToObjectiveCSo8NSLocaleCyF();
    (**(code **)(lVar7 + 8))(lVar6,local_78);
    _objc_msgSend(puVar3,"setLocale:",uVar4);
    uVar4 = 0;
    __s10Foundation8TimeZoneV7currentACvgZ(puVar9,0);
    __s10Foundation8TimeZoneV19_bridgeToObjectiveCSo06NSTimeC0CyF();
    (**(code **)(local_70 + 8))(puVar9,lStack_68);
    _objc_msgSend(puVar3,"setTimeZone:",uVar4);
    uVar4 = 0;
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    pcVar5 = "stringFromDate:";
    _objc_msgSend(puVar3,"stringFromDate:",uVar4);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar3);
    (**(code **)(lVar10 + 8))(lVar8,lVar2);
  }
  auVar12._8_8_ = pcVar5;
  auVar12._0_8_ = puVar3;
  return auVar12;
}

