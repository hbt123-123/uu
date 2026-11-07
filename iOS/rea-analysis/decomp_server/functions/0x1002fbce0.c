// rea decompile_all
// name: FUN_1002fbce0
// address: 0x1002fbce0
// body: available
// range: 0x1002fbce0-0x1002fc23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fbce0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long alStack_b0 [4];
  long local_90;
  long lStack_88;
  ulong local_80;
  long local_78;
  long local_70;
  undefined8 local_58;
  
  lVar4 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  local_70 = *(long *)(lVar4 + -8);
  lVar14 = (long)alStack_b0 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a85428;
  alStack_b0[3] = lVar14;
  local_78 = lVar4;
  FUN_100004bb4(&DAT_100a85428,&DAT_100819878);
  lVar14 = lVar14 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a82478;
  FUN_100004bb4(&DAT_100a82478,&DAT_100816c10);
  uVar12 = lVar14 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a85430;
  FUN_100004bb4(&DAT_100a85430,&DAT_100819888);
  uVar9 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_80 = uVar12 - uVar9;
  lVar11 = local_80 - uVar9;
  lVar17 = lVar11 - uVar9;
  puVar6 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar15 = (undefined8 *)
            (lVar17 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_1002c76a8();
  local_90 = (long)*(int *)(lVar4 + 0x5c);
  lStack_88 = param_1;
  FUN_10007f314(param_1 + local_90,puVar15,&DAT_100a82460,&DAT_1008175c0);
  lVar4 = 0;
  FUN_100277ad0();
  lVar13 = *(long *)(lVar4 + -8);
  puVar7 = puVar15;
  (**(code **)(lVar13 + 0x30))(puVar15,1,lVar4);
  if ((int)puVar7 == 1) {
    FUN_100040bb4(puVar15,&DAT_100a82460,&DAT_1008175c0);
    return;
  }
  puVar7 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar4);
  if ((int)puVar7 != 0xd) {
    FUN_1000d27dc(puVar15,FUN_100277ad0);
    return;
  }
  alStack_b0[2] = *puVar15;
  alStack_b0[1] = lVar13;
  local_58 = alStack_b0[2];
  _swift_errorRetain();
  puVar6 = &DAT_100a82488;
  FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
  lVar13 = 0;
  __s10Foundation8URLErrorVMa();
  uVar9 = uVar12;
  _swift_dynamicCast(uVar12,&local_58,puVar6,lVar13,6);
  lVar16 = *(long *)(lVar13 + -8);
  pcVar10 = *(code **)(lVar16 + 0x38);
  bVar1 = (uVar9 & 1) == 0;
  if (bVar1) {
    (*pcVar10)(uVar12,1,1,lVar13);
    FUN_100040bb4(uVar12,&DAT_100a82478,&DAT_100816c10);
    pcVar10 = *(code **)(local_70 + 0x38);
  }
  else {
    (*pcVar10)(uVar12,0,1,lVar13);
    puVar7 = &DAT_100a82490;
    FUN_100005c90(&DAT_100a82490,PTR___s10Foundation8URLErrorVMa_1009962f0,
                  PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_1009962e8);
    __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(lVar17,lVar13,puVar7);
    (**(code **)(lVar16 + 8))(uVar12,lVar13);
    pcVar10 = *(code **)(local_70 + 0x38);
  }
  lVar8 = local_70;
  lVar16 = local_78;
  (*pcVar10)(lVar17,bVar1,1,local_78);
  __s10Foundation8URLErrorV4CodeV9cancelledAEvgZ(lVar11);
  (*pcVar10)(lVar11,0,1,lVar16);
  lVar13 = (long)*(int *)(puVar5 + 0x30);
  FUN_10007f314(lVar17,lVar14,&DAT_100a85430,&DAT_100819888);
  FUN_10007f314(lVar11,lVar14 + lVar13,&DAT_100a85430,&DAT_100819888);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar8 = lVar14;
  (*pcVar10)(lVar14,1,lVar16);
  uVar9 = local_80;
  if ((int)lVar8 == 1) {
    _swift_errorRelease(alStack_b0[2]);
    FUN_100040bb4(lVar11,&DAT_100a85430,&DAT_100819888);
    FUN_100040bb4(lVar17,&DAT_100a85430,&DAT_100819888);
    lVar13 = lVar14 + lVar13;
    (*pcVar10)(lVar13,1,lVar16);
    if ((int)lVar13 != 1) {
LAB_1002fc108:
      FUN_100040bb4(lVar14,&DAT_100a85428,&DAT_100819878);
      return;
    }
    FUN_100040bb4(lVar14,&DAT_100a85430,&DAT_100819888);
  }
  else {
    FUN_10007f314(lVar14,local_80,&DAT_100a85430,&DAT_100819888);
    lVar8 = lVar14 + lVar13;
    (*pcVar10)(lVar8,1,lVar16);
    lVar3 = local_70;
    lVar2 = alStack_b0[3];
    if ((int)lVar8 == 1) {
      _swift_errorRelease(alStack_b0[2]);
      FUN_100040bb4(lVar11,&DAT_100a85430,&DAT_100819888);
      FUN_100040bb4(lVar17,&DAT_100a85430,&DAT_100819888);
      (**(code **)(local_70 + 8))(uVar9,lVar16);
      goto LAB_1002fc108;
    }
    (**(code **)(local_70 + 0x20))(alStack_b0[3],lVar14 + lVar13,lVar16);
    puVar5 = &DAT_100a85438;
    FUN_100005c90(&DAT_100a85438,PTR___s10Foundation8URLErrorV4CodeVMa_1009962c8,
                  PTR___s10Foundation8URLErrorV4CodeVSQAAMc_1009962e0);
    __sSQ2eeoiySbx_xtFZTj(uVar9,lVar2,lVar16,puVar5);
    _swift_errorRelease(alStack_b0[2]);
    pcVar10 = *(code **)(lVar3 + 8);
    (*pcVar10)(lVar2,lVar16);
    FUN_100040bb4(lVar11,&DAT_100a85430,&DAT_100819888);
    FUN_100040bb4(lVar17,&DAT_100a85430,&DAT_100819888);
    (*pcVar10)(local_80,lVar16);
    FUN_100040bb4(lVar14,&DAT_100a85430,&DAT_100819888);
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
  lVar11 = lStack_88;
  lVar14 = local_90;
  FUN_100040bb4(lStack_88 + local_90,&DAT_100a82460,&DAT_1008175c0);
  (**(code **)(alStack_b0[1] + 0x38))(lVar11 + lVar14,1,1,lVar4);
  return;
}

