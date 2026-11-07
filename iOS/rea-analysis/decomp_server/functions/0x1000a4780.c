// rea decompile_all
// name: FUN_1000a4780
// address: 0x1000a4780
// body: available
// range: 0x1000a4780-0x1000a4a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a4780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = (undefined1 *)0x0;
  puStack_68 = (undefined *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x4f);
  local_80 = local_70;
  uStack_78 = puStack_68;
  __sSS6appendyySSF(0x1000000000000041,0x8000000100880e60);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x6f736165728cbcef,0xaa00000000003d6e);
  puVar3 = PTR___sSSN_1009957f8;
  if ((*(byte *)(param_5 + 10) & 1) == 0) {
    puVar9 = *(undefined **)(param_5 + 8);
    local_70 = *(undefined1 **)(param_5 + 6);
    puStack_88 = *(undefined **)(param_5 + 8);
    local_90 = *(undefined1 **)(param_5 + 6);
    puStack_68 = puVar9;
    _swift_bridgeObjectRetain(puVar9);
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar7);
    FUN_10009ff0c();
    puVar5 = puVar7;
    puVar6 = PTR___sSSN_1009957f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar7,PTR___sSSN_1009957f8,puVar9);
    (**(code **)(lVar8 + 8))(puVar7,lVar4);
    FUN_1000a9ec8(&local_70);
    uVar1 = (ulong)puVar5 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(puVar6);
      uVar2 = *param_5;
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x17);
      _swift_bridgeObjectRelease(puStack_88);
      local_90 = (undefined1 *)0x632d686361746564;
      puStack_88 = (undefined *)0xed0000746e65696c;
      __sSS6appendyySSF(0x1000000000000013,0x8000000100880a50);
      puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
      local_94 = uVar2;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      puVar5 = local_90;
      puVar6 = puStack_88;
    }
  }
  else {
    local_70 = (undefined1 *)0x632d686361746564;
    puStack_68 = (undefined *)0xed0000746e65696c;
    __sSS6appendyySSF(0xe88ca1e8a789e620,0xad0000b697e685b6);
    puVar5 = local_70;
    puVar6 = puStack_68;
  }
  __sSS6appendyySSF(puVar5,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = puVar3;
  *param_1 = local_80;
  param_1[1] = uStack_78;
  return;
}

