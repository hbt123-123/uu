// rea decompile_all
// name: FUN_1000104dc
// address: 0x1000104dc
// body: available
// range: 0x1000104dc-0x1000106ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000106a0) */
/* WARNING: Removing unreachable block (ram,0x000100010618) */

uint FUN_1000104dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  uint uVar8;
  long lVar9;
  undefined1 auStack_70 [14];
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60 [15];
  undefined1 local_51;
  
  puVar3 = &DAT_100102a90;
  FUN_10000eb08(&DAT_100102a90,&DAT_1000cf380);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10000eba0(param_1,uVar1);
  FUN_100010230();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1000f2a70,&DAT_1000f2a70,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    uVar8 = (uint)puVar5;
    puVar6 = &DAT_100101ba0;
    FUN_10000eb08(&DAT_100101ba0,&DAT_1000cb750);
    local_61 = 1;
    puVar7 = &DAT_100102a98;
    FUN_10001fe98(&DAT_100102a98,&DAT_100102aa0,&TargetProtocolConformanceDescriptor_1000cbdc8,
                  PTR___sSayxGSesSeRzlMc_1000f0388);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_60,puVar6,&local_61,puVar3,puVar6,puVar7);
    local_62 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(&local_62,puVar3);
    (**(code **)(lVar9 + 8))(auStack_70 + -extraout_x8,puVar3);
    FUN_100001428(param_1);
  }
  else {
    uVar8 = (uint)uVar1;
    FUN_100001428(param_1);
  }
  return uVar8 & 1;
}

