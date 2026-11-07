// rea decompile_all
// name: FUN_1005e0cf8
// address: 0x1005e0cf8
// body: available
// range: 0x1005e0cf8-0x1005e0f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005e0e58) */
/* WARNING: Removing unreachable block (ram,0x0001005e0e9c) */
/* WARNING: Removing unreachable block (ram,0x0001005e0ebc) */
/* WARNING: Removing unreachable block (ram,0x0001005e0df0) */

void FUN_1005e0cf8(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100aae328;
  FUN_100004bb4(&DAT_100aae328,&DAT_1008408a8);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1005e0b5c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&DAT_1009da120,&DAT_1009da120,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar5,puVar3);
    local_52 = 1;
    puVar6 = &local_52;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_53 = 2;
    puVar7 = &local_53;
    puVar9 = puVar3;
    local_68 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_54 = 3;
    puVar6 = &local_54;
    puVar10 = puVar3;
    local_78 = puVar7;
    local_70 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar11 + 8))(auStack_80 + -extraout_x8,puVar3);
    _swift_bridgeObjectRetain(puVar8);
    puVar3 = local_70;
    _swift_bridgeObjectRetain(local_70);
    _swift_bridgeObjectRetain(puVar10);
    FUN_10003f094(param_2);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(puVar3);
    _swift_bridgeObjectRelease(puVar8);
    *param_1 = (int)puVar5;
    *(undefined1 **)(param_1 + 2) = local_68;
    *(undefined **)(param_1 + 4) = puVar8;
    *(undefined1 **)(param_1 + 6) = local_78;
    *(undefined **)(param_1 + 8) = puVar3;
    *(undefined1 **)(param_1 + 10) = puVar6;
    *(undefined **)(param_1 + 0xc) = puVar10;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

