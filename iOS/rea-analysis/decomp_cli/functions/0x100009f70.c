// rea decompile_all
// name: FUN_100009f70
// address: 0x100009f70
// body: available
// range: 0x100009f70-0x10000a323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000a218) */
/* WARNING: Removing unreachable block (ram,0x00010000a128) */
/* WARNING: Removing unreachable block (ram,0x00010000a19c) */
/* WARNING: Removing unreachable block (ram,0x00010000a1bc) */
/* WARNING: Removing unreachable block (ram,0x00010000a29c) */
/* WARNING: Removing unreachable block (ram,0x00010000a1c0) */
/* WARNING: Removing unreachable block (ram,0x00010000a1e0) */
/* WARNING: Removing unreachable block (ram,0x00010000a1d0) */
/* WARNING: Removing unreachable block (ram,0x00010000a1dc) */
/* WARNING: Removing unreachable block (ram,0x00010000a1e4) */
/* WARNING: Removing unreachable block (ram,0x00010000a1e8) */
/* WARNING: Removing unreachable block (ram,0x00010000a0bc) */

void FUN_100009f70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100101b58;
  local_80 = param_1;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_80 - extraout_x8;
  puVar2 = &DAT_100101c70;
  FUN_10000eb08(&DAT_100101c70,&DAT_1000cb7b0);
  lVar9 = *(long *)(puVar2 + -8);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar10 - extraout_x8_00;
  lVar3 = 0;
  FUN_1000116f0();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  plVar11 = (long *)(lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar6);
  FUN_100011704();
  local_70 = lVar8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar8,&DAT_1000f2580,&DAT_1000f2580,lVar4,uVar6,uVar1);
  puVar2 = local_78;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar7 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *plVar11 = (long)puVar5;
    plVar11[1] = (long)puVar7;
    local_52 = 1;
    puVar5 = &local_52;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[2] = (long)puVar5;
    plVar11[3] = (long)puVar7;
    local_53 = 2;
    puVar5 = &local_53;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar2);
    *(byte *)(plVar11 + 4) = (byte)puVar5 & 1;
    local_54 = 3;
    puVar5 = &local_54;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[5] = (long)puVar5;
    plVar11[6] = (long)puVar7;
    local_55 = 4;
    puVar5 = &local_55;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[7] = (long)puVar5;
    plVar11[8] = (long)puVar7;
    uVar6 = 0;
    FUN_10000fbb8(0);
    local_56 = 5;
    puVar7 = &DAT_100101b88;
    FUN_10000ec04(&DAT_100101b88,FUN_10000fbb8,&TargetProtocolConformanceDescriptor_1000cbc38);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar10,uVar6,&local_56,puVar2,uVar6,puVar7);
    (**(code **)(lVar9 + 8))(local_70,puVar2);
    FUN_100010128(lVar10,(long)plVar11 + (long)*(int *)(lVar3 + 0x24),&DAT_100101b58,&DAT_1000cb730)
    ;
    FUN_10000fc0c(plVar11,local_80,FUN_1000116f0);
    FUN_100001428(param_2);
    FUN_10000fc50(plVar11,FUN_1000116f0);
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

