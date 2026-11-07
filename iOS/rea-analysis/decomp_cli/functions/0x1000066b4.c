// rea decompile_all
// name: FUN_1000066b4
// address: 0x1000066b4
// body: available
// range: 0x1000066b4-0x100006b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000068ac) */
/* WARNING: Removing unreachable block (ram,0x0001000068f0) */
/* WARNING: Removing unreachable block (ram,0x000100006900) */
/* WARNING: Removing unreachable block (ram,0x000100006914) */
/* WARNING: Removing unreachable block (ram,0x000100006844) */
/* WARNING: Removing unreachable block (ram,0x000100006ac8) */
/* WARNING: Removing unreachable block (ram,0x000100006960) */
/* WARNING: Removing unreachable block (ram,0x0001000069f4) */
/* WARNING: Removing unreachable block (ram,0x000100006a08) */
/* WARNING: Removing unreachable block (ram,0x000100006a2c) */

void FUN_1000066b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *local_90 [2];
  long local_80;
  undefined *local_78;
  long local_68;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100101b58;
  local_90[1] = (undefined *)param_1;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100101b10;
  local_80 = (long)local_90 - extraout_x8;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)local_90 - extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100101b78;
  FUN_10000eb08(&DAT_100101b78,&DAT_1000cb740);
  lVar8 = *(long *)(puVar3 + -8);
  local_78 = puVar3;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar9 - extraout_x8_01;
  lVar4 = 0;
  FUN_100010114();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  local_68 = param_2;
  FUN_10000eba0(param_2,uVar6);
  FUN_100010170();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,&DAT_1000f2b00,&DAT_1000f2b00,param_2,uVar6,uVar1);
  puVar3 = local_78;
  lVar2 = local_80;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar7 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *puVar11 = puVar5;
    puVar11[1] = puVar7;
    local_52 = 1;
    puVar5 = &local_52;
    local_90[0] = puVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar11[2] = puVar5;
    puVar11[3] = puVar3;
    local_53 = 2;
    puVar5 = &local_53;
    puVar3 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar11[4] = puVar5;
    puVar11[5] = puVar3;
    local_55 = 3;
    FUN_1000101f0();
    puVar7 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_54,&DAT_1000f0fa8,&local_55,local_78,&DAT_1000f0fa8,puVar5);
    *(undefined1 *)(puVar11 + 6) = local_54;
    local_56 = 4;
    puVar5 = &local_56;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar7);
    *(byte *)((long)puVar11 + 0x31) = (byte)puVar5 & 1;
    uVar6 = 0;
    __s10Foundation4DateVMa(0);
    local_57 = 5;
    puVar3 = &DAT_100101ac8;
    FUN_10000ec04(&DAT_100101ac8,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSeAAMc_1000f07e8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar9,uVar6,&local_57,puVar7,uVar6,puVar3);
    FUN_100010128(lVar9,(long)puVar11 + (long)*(int *)(lVar4 + 0x24),&DAT_100101b10,&DAT_1000cb700);
    uVar6 = 0;
    FUN_10000fbb8(0);
    local_58 = 6;
    puVar3 = &DAT_100101b88;
    FUN_10000ec04(&DAT_100101b88,FUN_10000fbb8,&TargetProtocolConformanceDescriptor_1000cbc38);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar2,uVar6,&local_58,puVar7,uVar6,puVar3);
    (**(code **)(lVar8 + 8))(lVar10,local_78);
    FUN_100010128(lVar2,(long)puVar11 + (long)*(int *)(lVar4 + 0x28),&DAT_100101b58,&DAT_1000cb730);
    FUN_10000fc0c(puVar11,local_90[1],FUN_100010114);
    FUN_100001428(local_68);
    FUN_10000fc50(puVar11,FUN_100010114);
  }
  else {
    FUN_100001428(local_68);
  }
  return;
}

