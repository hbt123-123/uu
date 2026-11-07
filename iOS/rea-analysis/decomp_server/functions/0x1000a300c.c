// rea decompile_all
// name: FUN_1000a300c
// address: 0x1000a300c
// body: available
// range: 0x1000a300c-0x1000a3307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a300c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_120 [12];
  int local_114;
  int local_c0 [2];
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  *(undefined8 *)(puVar4 + 0x20) = 0x737365732d736168;
  *(undefined8 *)(puVar4 + 0x28) = 0xeb000000006e6f69;
  *(undefined8 *)(puVar4 + 0x30) = 0x742d;
  *(undefined8 *)(puVar4 + 0x38) = 0xe200000000000000;
  *(undefined8 *)(puVar4 + 0x40) = param_1;
  *(undefined8 *)(puVar4 + 0x48) = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_1000a3308(local_c0,puVar4);
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),PTR___sSSN_1009957f8);
  if ((local_98 & 1) == 0) {
    if (local_c0[0] == 1) {
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      FUN_1000a9ec8(&local_80);
      puStack_88 = (undefined *)uStack_a0;
      local_90 = local_a8;
      FUN_1000a9ec8(&local_90);
      puVar3 = (undefined1 *)0x0;
      puVar4 = (undefined *)0x1;
    }
    else if (local_c0[0] == 0) {
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      FUN_1000a9ec8(&local_80);
      puStack_88 = (undefined *)uStack_a0;
      local_90 = local_a8;
      FUN_1000a9ec8(&local_90);
      puVar3 = (undefined1 *)0x0;
      puVar4 = (undefined *)0x0;
    }
    else {
      puStack_88 = (undefined *)uStack_a0;
      local_90 = local_a8;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      _swift_bridgeObjectRetain(uStack_a0);
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar5);
      FUN_10009ff0c();
      puVar3 = puVar5;
      puVar4 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (puVar5,PTR___sSSN_1009957f8,uStack_a0);
      (**(code **)(lVar6 + 8))(puVar5,lVar2);
      FUN_1000a9ec8(&local_80);
      uVar1 = (ulong)puVar3 & 0xffffffffffff;
      if (((ulong)puVar4 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar4 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(puVar4);
        local_90 = (undefined1 *)0x0;
        puStack_88 = (undefined *)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x17);
        _swift_bridgeObjectRelease(puStack_88);
        local_90 = (undefined1 *)0x737365732d736168;
        puStack_88 = (undefined *)0xeb000000006e6f69;
        __sSS6appendyySSF(0x1000000000000013,0x8000000100880a50);
        local_114 = local_c0[0];
        puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar4);
        puVar3 = local_90;
        puVar4 = puStack_88;
      }
      puStack_88 = (undefined *)uStack_b0;
      local_90 = local_b8;
      FUN_1000a9ec8(&local_90);
      FUN_1000a9ec8(&local_80);
    }
  }
  else {
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    FUN_1000a9ec8(&local_80);
    puStack_88 = (undefined *)uStack_a0;
    local_90 = local_a8;
    FUN_1000a9ec8(&local_90);
    puVar4 = (undefined *)0x8000000100880d70;
    puVar3 = (undefined1 *)0x1000000000000018;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = puVar3;
  return auVar7;
}

