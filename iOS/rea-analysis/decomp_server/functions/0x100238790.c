// rea decompile_all
// name: FUN_100238790
// address: 0x100238790
// body: available
// range: 0x100238790-0x100238aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100238790(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = (undefined1 *)0x0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a7e718;
  FUN_100004bb4(&DAT_100a7e718,&DAT_100813648);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar9 = (undefined1 *)(lVar8 - extraout_x12);
  if ((param_4 & 1) == 0) {
    _swift_beginAccess(&DAT_100b36348,auStack_68,0,0);
    lVar8 = DAT_100b36348;
    if (DAT_100b36348 != 0) {
      _swift_beginAccess(DAT_100b36348 + 0x50,auStack_80,0,0);
      uVar2 = *(undefined8 *)(lVar8 + 0x50);
      uVar3 = *(undefined8 *)(lVar8 + 0x58);
      _swift_bridgeObjectRetain(uVar3);
      __s10Foundation3URLV6stringACSgSSh_tcfC(puVar9,uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      puVar7 = puVar9;
      (**(code **)(lVar11 + 0x30))(puVar9,1,puVar4);
      if ((int)puVar7 != 1) {
        pcVar10 = *(code **)(lVar11 + 0x20);
        goto LAB_100238a38;
      }
      FUN_100040bb4(puVar9,&DAT_100a7e718,&DAT_100813648);
    }
    if (DAT_100a7dde8 != -1) {
      _swift_once(&DAT_100a7dde8,FUN_1002238e0);
    }
    puVar9 = puVar4;
    FUN_10021bec0(puVar4,&DAT_100b362e8);
    pcVar10 = *(code **)(lVar11 + 0x10);
  }
  else {
    if (DAT_100a7de18 != -1) {
      _swift_once(&DAT_100a7de18,FUN_100234ab4);
    }
    _swift_beginAccess(&DAT_100b36340,auStack_68,0,0);
    puVar1 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::apiHost);
    _swift_beginAccess(puVar1,auStack_80,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    _swift_bridgeObjectRetain(uVar3);
    __s10Foundation3URLV6stringACSgSSh_tcfC(lVar8,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    pcVar10 = *(code **)(lVar11 + 0x30);
    lVar6 = lVar8;
    (*pcVar10)(lVar8,1,puVar4);
    if ((int)lVar6 == 1) {
      if (DAT_100a7dde8 != -1) {
        _swift_once(&DAT_100a7dde8,FUN_1002238e0);
      }
      puVar9 = puVar4;
      FUN_10021bec0(puVar4,&DAT_100b362e8);
      (**(code **)(lVar11 + 0x10))(puVar7,puVar9,puVar4);
      lVar6 = lVar8;
      (*pcVar10)(lVar8,1,puVar4);
      if ((int)lVar6 != 1) {
        FUN_100040bb4(lVar8,&DAT_100a7e718,&DAT_100813648);
      }
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar7,lVar8,puVar4);
    }
    pcVar10 = *(code **)(lVar11 + 0x20);
    puVar9 = puVar7;
  }
LAB_100238a38:
  (*pcVar10)(param_1,puVar9,puVar4);
  return;
}

