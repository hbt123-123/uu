// rea decompile_all
// name: FUN_1000e66f8
// address: 0x1000e66f8
// body: available
// range: 0x1000e66f8-0x1000e69d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e66f8(undefined1 *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [16];
  uint auStack_80 [4];
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_1000e49dc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a77e70;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar4 - extraout_x8_00;
  if (0 < (int)param_3) {
    puVar5 = auStack_68;
    _swift_beginAccess(unaff_x20 + 0x20,puVar5,0x20,0);
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(long *)(lVar8 + 0x10) == 0) ||
       (lVar3 = param_2, thunk_FUN_1001a2c34(param_2), ((ulong)puVar5 & 1) == 0)) {
      uVar6 = 1;
    }
    else {
      FUN_100082394(*(long *)(lVar8 + 0x38) + *(long *)(lVar10 + 0x48) * lVar3,lVar9,FUN_1000e49dc);
      uVar6 = 0;
    }
    (**(code **)(lVar10 + 0x38))(lVar9,uVar6,1,lVar1);
    lVar8 = lVar9;
    (**(code **)(lVar10 + 0x30))(lVar9,1,lVar1);
    if ((int)lVar8 == 0) {
      FUN_100082394(lVar9,lVar4,FUN_1000e49dc);
      FUN_100040bb4(lVar9,&DAT_100a77e70,&DAT_10080cca0);
      _swift_endAccess(auStack_68);
      lVar1 = *(long *)(lVar4 + *(int *)(lVar1 + 0x20));
      _swift_bridgeObjectRetain(lVar1);
      FUN_1000d27dc(lVar4,FUN_1000e49dc);
      if ((ulong)param_3 <= *(ulong *)(lVar1 + 0x10)) {
        lVar4 = 0;
        FUN_1000e984c();
        uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
        FUN_100082394(lVar1 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)) +
                      *(long *)(*(long *)(lVar4 + -8) + 0x48) * ((ulong)param_3 - 1),param_1,
                      FUN_1000e984c);
        _swift_bridgeObjectRelease(lVar1);
        puVar2 = &DAT_100a77e78;
        FUN_100004bb4(&DAT_100a77e78,&DAT_10080cca8);
        uVar6 = 0;
        goto LAB_1000e6954;
      }
      _swift_bridgeObjectRelease(lVar1);
    }
    else {
      FUN_100040bb4(lVar9,&DAT_100a77e70,&DAT_10080cca0);
      _swift_endAccess(auStack_68);
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(int *)(lVar9 + -0x10) = (int)param_2;
  *(uint *)(lVar9 + -0xc) = param_3;
  FUN_1003fb4ec(FUN_1000ea5fc,lVar9 + -0x20,0xd0000000000000a9,0x8000000100887e20,0xd000000000000021
                ,0x8000000100888670,200,0);
  *param_1 = 3;
  puVar2 = &DAT_100a77e78;
  FUN_100004bb4(&DAT_100a77e78,&DAT_10080cca8);
  uVar6 = 1;
LAB_1000e6954:
  _swift_storeEnumTagMultiPayload(param_1,puVar2,uVar6);
  return;
}

