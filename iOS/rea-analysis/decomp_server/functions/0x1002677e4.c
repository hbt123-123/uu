// rea decompile_all
// name: FUN_1002677e4
// address: 0x1002677e4
// body: available
// range: 0x1002677e4-0x100267b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002677e4(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uStack_120;
  byte abStack_118 [8];
  undefined8 auStack_110 [2];
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [32];
  
  puVar5 = &DAT_100a81330;
  local_f8 = param_8;
  local_e8 = param_7;
  local_e0 = param_1;
  local_d8 = param_6;
  local_d0 = param_3;
  FUN_100004bb4(&DAT_100a81330,&DAT_1008154d8);
  lVar4 = -(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)auStack_110 + lVar4);
  puVar6 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  uVar10 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = (long)puVar15 - uVar10;
  lVar11 = local_f0 - uVar10;
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  uVar10 = *(ulong *)(param_2 + 0x28);
  lVar14 = *(long *)(param_2 + 0x30);
  lVar8 = param_2 + 0x10;
  FUN_10003f030(lVar8,uVar10);
  lVar16 = *(long *)(uVar10 - 8);
  lVar12 = lVar11 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar16 + 0x10))(lVar12,lVar8,uVar10);
  uVar7 = uVar10;
  (**(code **)(lVar14 + 8))(uVar10,lVar14);
  (**(code **)(lVar16 + 8))(lVar12,uVar10);
  uVar1 = local_d0;
  if ((uVar7 & 1) == 0) {
    lVar8 = 0;
    __s10Foundation10URLRequestVMa();
    lVar14 = *(long *)(lVar8 + -8);
    pcVar13 = *(code **)(lVar14 + 0x38);
    (*pcVar13)(lVar11,1,1,lVar8);
    FUN_10007f314(local_e0,puVar15,&DAT_100a81330,&DAT_1008154d8);
    puVar9 = puVar15;
    _swift_getEnumCaseMultiPayload(puVar15,puVar5);
    if ((int)puVar9 == 1) {
      uVar1 = *puVar15;
      uVar2 = *(undefined8 *)((long)auStack_110 + lVar4 + 8);
      bVar3 = *(byte *)((long)&local_100 + lVar4);
      FUN_100260260(uVar1,uVar2,bVar3);
      (*param_4)(uVar1,uVar2,bVar3 | 0x100);
      FUN_10025fdb8(uVar1,uVar2,bVar3);
      FUN_10025fdb8(uVar1,uVar2,bVar3);
      FUN_100040bb4(lVar11,&DAT_100a81018,&DAT_100815150);
    }
    else {
      FUN_100040bb4(lVar11,&DAT_100a81018,&DAT_100815150);
      (**(code **)(lVar14 + 0x20))(lVar11,puVar15,lVar8);
      (*pcVar13)(lVar11,0,1,lVar8);
      puVar5 = &DAT_1009a9028;
      _swift_allocObject(&DAT_1009a9028,0x30,7);
      uVar2 = local_e8;
      lVar4 = local_f0;
      *(undefined8 *)(puVar5 + 0x10) = uVar1;
      *(undefined8 *)(puVar5 + 0x18) = local_e8;
      *(code **)(puVar5 + 0x20) = param_4;
      *(undefined8 *)(puVar5 + 0x28) = param_5;
      FUN_10007f314(lVar11,local_f0,&DAT_100a81018,&DAT_100815150);
      lVar16 = lVar4;
      local_e0 = lVar14;
      (**(code **)(lVar14 + 0x30))(lVar4,1,lVar8);
      if ((int)lVar16 == 1) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100267b84);
        (*pcVar13)();
      }
      auStack_110[1] = param_9;
      local_100 = param_10;
      _swift_retain(uVar1);
      _swift_retain(uVar2);
      _swift_retain(param_5);
      *(byte *)(lVar12 + -8) = param_12 & 1;
      *(undefined8 *)(lVar12 + -0x10) = param_11;
      FUN_100267fd0(auStack_b0,local_d8,lVar4,local_f8,auStack_110[1],local_100,FUN_10026b430,puVar5
                    ,uVar2);
      _swift_release(puVar5);
      FUN_100040bb4(lVar11,&DAT_100a81018,&DAT_100815150);
      (**(code **)(local_e0 + 8))(lVar4,lVar8);
      _swift_beginAccess(param_2 + 0x10,auStack_c8,0x21,0);
      FUN_10003f094(param_2 + 0x10);
      FUN_1000a0074(auStack_b0,param_2 + 0x10);
      _swift_endAccess(auStack_c8);
    }
  }
  else {
    FUN_100267cd4(param_4,param_5,local_d8);
  }
  return;
}

