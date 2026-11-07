// rea decompile_all
// name: FUN_10052d69c
// address: 0x10052d69c
// body: available
// range: 0x10052d69c-0x10052d8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052d69c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar1 = param_1;
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    if ((*(long *)(lVar4 + 0x10) != 0) && (FUN_1003618e4(), (param_2 & 1) != 0)) {
      lVar4 = *(long *)(lVar4 + 0x38) + (long)puVar1 * 0x50;
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      uVar10 = *(undefined8 *)(lVar4 + 0x30);
      uVar7 = *(undefined8 *)(lVar4 + 0x38);
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      uVar5 = (ushort)*(byte *)(lVar4 + 0x48);
      uVar8 = (ushort)*(byte *)(lVar4 + 0x49);
LAB_10052d8a4:
      FUN_10050f830(uVar7,uVar6,uVar5,uVar8);
      FUN_10052cda4(uVar2,uVar10);
      FUN_10051f490(uVar7,uVar6,uVar5,uVar8);
      return;
    }
  }
  else if ((*(long *)(lVar4 + 0x10) != 0) && (FUN_1003618e4(), (param_2 & 1) != 0)) {
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 0x50);
    uVar5 = *(ushort *)(puVar3 + 4);
    if ((char)(uVar5 >> 8) != -1) {
      uVar7 = puVar3[2];
      uVar6 = puVar3[3];
      uVar8 = uVar5 >> 8 & 1;
      uVar2 = *puVar3;
      uVar10 = puVar3[1];
      goto LAB_10052d8a4;
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x40);
  if (lVar4 != 0) {
    if ((*(long *)(lVar4 + 0x10) == 0) || (FUN_1003618e4(param_1), (param_2 & 1) == 0)) {
      local_60 = 0;
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
    }
    else {
      FUN_1000b142c(*(long *)(lVar4 + 0x38) + (long)param_1 * 0x28,&local_80);
      if (local_68 != 0) {
        puVar1 = &local_80;
        FUN_10003f030(puVar1,local_68);
        lVar9 = *(long *)(local_68 + -8);
        lVar4 = *(long *)(lVar9 + 0x40);
        (**(code **)(lVar9 + 0x10))
                  (auStack_b0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar1,local_68);
        FUN_100040bb4(&local_80,&DAT_100aaa288,&DAT_100836090);
        (**(code **)(local_60 + 0x18))(auStack_a8,local_68,local_60);
        (**(code **)(lVar9 + 8))(auStack_b0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),local_68);
        FUN_10003f030(auStack_a8,local_90);
        uVar2 = local_90;
        lVar4 = lStack_88;
        (**(code **)(lStack_88 + 0x10))(local_90,lStack_88);
        FUN_10003f094(auStack_a8);
        FUN_10052b8d0(uVar2,lVar4);
        _swift_bridgeObjectRelease(lVar4);
        return;
      }
    }
    puVar1 = &local_80;
    FUN_100040bb4(puVar1,&DAT_100aaa288,&DAT_100836090);
  }
  FUN_1004f9a9c();
  _swift_allocError(&DAT_1009d0558,puVar1,0,0);
  *(undefined1 *)puVar1 = 4;
  _swift_willThrow();
  return;
}

