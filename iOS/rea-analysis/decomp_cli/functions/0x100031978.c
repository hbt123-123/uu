// rea decompile_all
// name: FUN_100031978
// address: 0x100031978
// body: available
// range: 0x100031978-0x100031c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100031978(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100101b10;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_00;
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3c);
  __sSS6appendyySSF(0x203a656d614e,0xe600000000000000);
  __sSS6appendyySSF(param_1[2],param_1[3]);
  __sSS6appendyySSF(0x206563697665440a,0xec000000203a4449);
  __sSS6appendyySSF(*param_1,param_1[1]);
  __sSS6appendyySSF(0x726f6674616c500a,0xeb00000000203a6d);
  __sSS6appendyySSF(param_1[4],param_1[5]);
  __sSS6appendyySSF(0x3a656e696c6e4f0a,0xe900000000000020);
  uVar1 = 0x65757274;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = 0x65736c6166;
  }
  pcVar10 = (char *)0xe400000000000000;
  uVar2 = 0xe400000000000000;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x6573207473614c0a,0xec000000203a6e65);
  lVar6 = 0;
  FUN_10000fb58();
  FUN_1000339c8((long)param_1 + (long)*(int *)(lVar6 + 0x20),lVar9);
  lVar6 = lVar9;
  (**(code **)(lVar11 + 0x30))(lVar9,1,lVar4);
  if ((int)lVar6 == 1) {
    puVar7 = (undefined *)0x6c6c756e;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar8,lVar9,lVar4);
    puVar7 = &_OBJC_CLASS___NSISO8601DateFormatter;
    _objc_allocWithZone(&_OBJC_CLASS___NSISO8601DateFormatter);
    _objc_msgSend();
    puVar5 = puVar7;
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    pcVar10 = "stringFromDate:";
    _objc_msgSend(puVar7,"stringFromDate:",puVar5);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar7);
    (**(code **)(lVar11 + 8))(lVar8,lVar4);
  }
  __sSS6appendyySSF(puVar7,pcVar10);
  _swift_bridgeObjectRelease(pcVar10);
  auVar3._8_8_ = uStack_58;
  auVar3._0_8_ = local_60;
  return auVar3;
}

