// rea decompile_all
// name: FUN_100259fbc
// address: 0x100259fbc
// body: available
// range: 0x100259fbc-0x10025a203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025a170) */
/* WARNING: Removing unreachable block (ram,0x00010025a090) */

void FUN_100259fbc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_78 [24];
  undefined1 local_51;
  
  puVar2 = &DAT_100a80918;
  FUN_100004bb4(&DAT_100a80918,&DAT_100814b00);
  lVar9 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  local_a8 = puVar2;
  FUN_10003f030(param_1,uVar1);
  FUN_10025b078();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),&DAT_1009a85e0,&DAT_1009a85e0,lVar3,
             uVar1,uVar7);
  puVar2 = local_a8;
  if (unaff_x21 == 0) {
    local_a0 = 0;
    puVar4 = &local_a0;
    puVar5 = local_a8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
    *(undefined **)(unaff_x20 + 0x18) = puVar5;
    puVar5 = &DAT_100a808f0;
    FUN_100004bb4(&DAT_100a808f0,&DAT_100814af0);
    local_78[0] = 1;
    puVar6 = &DAT_100a80920;
    FUN_10025b118(&DAT_100a80920,PTR___sSSSesWP_100995828,PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_a0,puVar5,local_78,puVar2,puVar5,puVar6);
    uVar1 = CONCAT71(uStack_9f,local_a0);
    _swift_beginAccess(puVar10,local_78,1,0);
    uVar7 = *puVar10;
    *puVar10 = uVar1;
    _swift_bridgeObjectRelease(uVar7);
    local_51 = 2;
    FUN_10025b180();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_a0,&DAT_1009a8540,&local_51,puVar2,&DAT_1009a8540,uVar7);
    (**(code **)(lVar9 + 8))(auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar2);
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_98;
    *(ulong *)(unaff_x20 + 0x30) = CONCAT71(uStack_9f,local_a0);
    *(undefined8 *)(unaff_x20 + 0x40) = local_90;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_88;
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
    FUN_10025b0f8();
    _swift_deallocPartialClassInstance();
  }
  FUN_10003f094(param_1);
  return;
}

