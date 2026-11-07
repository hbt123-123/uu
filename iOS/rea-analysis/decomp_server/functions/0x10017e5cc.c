// rea decompile_all
// name: FUN_10017e5cc
// address: 0x10017e5cc
// body: available
// range: 0x10017e5cc-0x10017e7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10017e5cc(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ID IVar8;
  long lVar9;
  undefined1 auStack_80 [16];
  undefined8 auStack_70 [2];
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar6 + -extraout_x8_00;
  FUN_10017f52c(puVar7,param_2,param_3);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,puVar3);
  if ((int)puVar4 == 1) {
    *param_1 = *puVar7;
    _swift_storeEnumTagMultiPayload(param_1,puVar3,1);
  }
  else {
    puVar4 = puVar6;
    puVar5 = puVar7;
    (**(code **)(lVar9 + 0x20))(puVar6,puVar7,lVar2);
    IVar8 = *(ID *)(unaff_x20 + 0x10);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar5);
    IVar8 = _objc_msgSend(IVar8,"fileExistsAtPath:",puVar4);
    bVar1 = (int)IVar8 == 0;
    if (bVar1) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined1 **)(puVar7 + -0x10) = puVar6;
      FUN_1003fb4ec(FUN_100180388,puVar7 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                    0xd000000000000012,0x80000001008971a0,0xaa,0);
      *param_1 = 10;
    }
    else {
      (**(code **)(lVar9 + 0x10))(param_1,puVar6,lVar2);
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar3,bVar1);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
  }
  return;
}

