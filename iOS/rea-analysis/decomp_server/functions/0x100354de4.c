// rea decompile_all
// name: FUN_100354de4
// address: 0x100354de4
// body: available
// range: 0x100354de4-0x10035509b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100354de4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 ***pppuVar14;
  long unaff_x20;
  undefined8 ***pppuVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 auStack_d0 [4];
  uint local_cc;
  undefined8 **local_c8;
  undefined8 **local_c0;
  uint local_b4;
  undefined8 **local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined8 ***local_88 [3];
  undefined8 ***local_70;
  undefined *local_68;
  
  lVar8 = 0;
  __ss13EncodingErrorO7ContextVMa();
  lVar17 = *(long *)(lVar8 + -8);
  puVar16 = auStack_d0 + -(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = (undefined8 ***)param_2;
  FUN_1000efc08(local_88);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))();
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    ppppuVar9 = local_88;
    FUN_100358178();
    pppuVar15 = *(undefined8 ****)(unaff_x20 + 0x20);
    pppuVar14 = *(undefined8 ****)(unaff_x20 + 0x10);
    local_b4 = (uint)*(byte *)(unaff_x20 + 0x28);
    pppuVar1 = *(undefined8 ****)(unaff_x20 + 0x30);
    local_c0 = *(undefined8 ***)(unaff_x20 + 0x38);
    pppuVar2 = *(undefined8 ****)(unaff_x20 + 0x40);
    pppuVar3 = *(undefined8 ****)(unaff_x20 + 0x48);
    local_b0 = *(undefined8 ***)(unaff_x20 + 0x58);
    local_90 = *(undefined8 ***)(unaff_x20 + 0x60);
    local_cc = (uint)*(byte *)(unaff_x20 + 0x50);
    local_c8 = pppuVar14;
    local_a8 = pppuVar1;
    local_a0 = param_3;
    uStack_98 = param_1;
    FUN_100357ba0();
    ppppuVar10 = ppppuVar9;
    _swift_allocObject();
    ppppuVar10[2] = pppuVar14;
    ppppuVar10[3] = pppuVar15;
    *(char *)(ppppuVar10 + 4) = (char)local_b4;
    ppppuVar10[5] = pppuVar1;
    ppuVar6 = local_c0;
    ppppuVar10[6] = (undefined8 ***)local_c0;
    ppppuVar10[7] = pppuVar2;
    ppppuVar10[8] = pppuVar3;
    uVar5 = local_cc;
    *(char *)(ppppuVar10 + 9) = (char)local_cc;
    ppuVar7 = local_90;
    ppppuVar10[10] = (undefined8 ***)local_b0;
    ppppuVar10[0xb] = (undefined8 ***)ppuVar7;
    puVar12 = &DAT_100a88418;
    local_70 = ppppuVar9;
    FUN_100358110(&DAT_100a88418,FUN_100357ba0,&TargetProtocolConformanceDescriptor_10081c450);
    local_88[0] = ppppuVar10;
    local_68 = puVar12;
    _swift_retain(pppuVar15);
    _swift_bridgeObjectRetain(local_c8);
    FUN_100317824(local_a8,ppuVar6);
    FUN_100357714(pppuVar2,pppuVar3,uVar5);
    _swift_retain(local_90);
    __sSE6encode2toys7Encoder_p_tKFTj(local_88,param_2,local_a0);
    FUN_10003f094(local_88);
    *(undefined1 *)(unaff_x20 + 0x18) = 0;
  }
  else {
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
    __ss13EncodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              (puVar16);
    lVar11 = 0;
    __ss13EncodingErrorOMa();
    puVar13 = (undefined8 *)PTR___ss13EncodingErrorOs0B0sWP_100995b30;
    _swift_allocError();
    puVar12 = &DAT_100a88428;
    FUN_100004bb4(&DAT_100a88428,&DAT_10081c4a8);
    iVar4 = *(int *)(puVar12 + 0x30);
    puVar12 = &DAT_100a82480;
    FUN_100004bb4(&DAT_100a82480,&DAT_1008182d0);
    puVar13[3] = puVar12;
    puVar12 = &DAT_1009b4368;
    _swift_allocObject(&DAT_1009b4368,0x30,7);
    *puVar13 = puVar12;
    FUN_1002c64b8(local_88,puVar12 + 0x10);
    (**(code **)(lVar17 + 0x10))((long)puVar13 + (long)iVar4,puVar16,lVar8);
    (**(code **)(*(long *)(lVar11 + -8) + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___ss13EncodingErrorO12invalidValueyAByp_AB7ContextVtcABmFWC_100995b20,
               lVar11);
    _swift_willThrow();
    (**(code **)(lVar17 + 8))(puVar16,lVar8);
    FUN_100358178(local_88);
  }
  return;
}

