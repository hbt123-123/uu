// rea decompile_all
// name: FUN_1003457a8
// address: 0x1003457a8
// body: available
// range: 0x1003457a8-0x100345abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1003457a8(undefined8 param_1,ID param_2,long param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long alStack_80 [3];
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar2 + -8);
  uVar6 = (long)alStack_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  puVar10 = (undefined8 *)
            (uVar6 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar9 = param_3;
  if (param_5 == 0) {
    alStack_80[1] = param_5;
    alStack_80[2] = lVar11;
    if ((ulong)param_4 >> 0x3c < 0xf) {
      uVar1 = (uint)((ulong)param_4 >> 0x20);
      uVar8 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar8 == 0) {
          if (((ulong)param_4 & 0xff000000000000) == 0) goto LAB_1003458a4;
        }
        else {
          if ((long)(int)param_3 == param_3 >> 0x20) goto LAB_1003458c4;
LAB_100345a1c:
          FUN_10010bd10(param_3,param_4);
        }
        puVar4 = *(undefined8 **)(unaff_x20 + 0x28);
        lVar11 = *(long *)(unaff_x20 + 0x30);
        lVar2 = unaff_x20 + 0x10;
        FUN_10003f030(lVar2,puVar4);
        puVar10 = param_4;
        (**(code **)(lVar11 + 8))(param_3,param_4,puVar4,lVar11);
        if (unaff_x21 == 0) {
          FUN_100006cc8(param_3,param_4);
          goto LAB_100345a7c;
        }
        FUN_100006cc8(param_3,param_4);
        param_5 = alStack_80[1];
        lVar9 = lVar2;
        puVar10 = puVar4;
        goto LAB_100345a78;
      }
      if (uVar8 == 2) {
        if (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)) goto LAB_100345a1c;
      }
      else {
LAB_1003458a4:
        FUN_100006cc8(param_3,param_4);
      }
    }
LAB_1003458c4:
    FUN_10007f314(param_1,puVar10,&DAT_100a82c30,&DAT_1008171f0);
    lVar9 = alStack_80[2];
    puVar4 = puVar10;
    (**(code **)(alStack_80[2] + 0x30))(puVar10,1,lVar2);
    if ((int)puVar4 != 1) {
      uVar5 = uVar6;
      (**(code **)(lVar9 + 0x20))(uVar6,puVar10,lVar2);
      __s10Foundation10URLRequestV10httpMethodSSSgvg();
      (**(code **)(lVar9 + 8))(uVar6,lVar2);
      if (puVar10 != (undefined8 *)0x0) {
        FUN_100153074(uVar5,puVar10,*(undefined8 *)(unaff_x20 + 0x40));
        _swift_bridgeObjectRelease(puVar10);
        if ((uVar5 & 1) != 0) {
          lVar9 = 0;
          puVar10 = (undefined8 *)0xc000000000000000;
          goto LAB_100345a7c;
        }
      }
    }
    if (param_2 != 0) {
      uVar6 = _objc_msgSend(param_2,"statusCode");
      FUN_1003440c0(uVar6,unaff_x20);
      if ((uVar6 & 1) != 0) {
        lVar9 = 0;
        puVar10 = (undefined8 *)0xc000000000000000;
        goto LAB_100345a7c;
      }
    }
    lVar9 = 0;
    FUN_100277ad0(0);
    puVar10 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar9,puVar10,0,0);
    uVar7 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar10,uVar7,6);
    _swift_storeEnumTagMultiPayload(puVar10,lVar9,10);
    _swift_willThrow();
    param_5 = alStack_80[1];
  }
  else {
    _swift_willThrow();
  }
LAB_100345a78:
  _swift_errorRetain(param_5);
LAB_100345a7c:
  auVar12._8_8_ = puVar10;
  auVar12._0_8_ = lVar9;
  return auVar12;
}

