// rea decompile_all
// name: FUN_100014184
// address: 0x100014184
// body: available
// range: 0x100014184-0x1000143d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100014324) */
/* WARNING: Removing unreachable block (ram,0x0001000142d4) */
/* WARNING: Removing unreachable block (ram,0x000100014338) */
/* WARNING: Removing unreachable block (ram,0x00010001434c) */
/* WARNING: Removing unreachable block (ram,0x000100014254) */

void FUN_100014184(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar3 = &DAT_1001029e8;
  FUN_10000eb08(&DAT_1001029e8,&DAT_1000cf2f0);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10001402c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_b0 + -extraout_x8,&DAT_1000f1bf0,&DAT_1000f1bf0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_80 = 0;
    puVar5 = &local_80;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_51 = 1;
    local_88 = puVar5;
    FUN_100010ca4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_80,&DAT_1000f10a8,&local_51,puVar3,&DAT_1000f10a8,puVar5);
    local_a0 = CONCAT71(uStack_7f,local_80);
    local_98 = uStack_78;
    local_a8 = local_70;
    local_90 = uStack_68;
    local_80 = 2;
    puVar5 = &local_80;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    (**(code **)(lVar7 + 8))(auStack_b0 + -extraout_x8,puVar3);
    uVar2 = local_90;
    _swift_bridgeObjectRetain(local_90);
    _swift_bridgeObjectRetain(puVar6);
    uVar1 = local_98;
    _swift_bridgeObjectRetain(local_98);
    FUN_100001428(param_2);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(puVar6);
    *param_1 = local_88;
    param_1[1] = puVar6;
    param_1[2] = local_a0;
    param_1[3] = uVar1;
    param_1[4] = local_a8;
    param_1[5] = uVar2;
    *(byte *)(param_1 + 6) = (byte)puVar5 & 1;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

