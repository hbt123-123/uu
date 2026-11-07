// rea decompile_all
// name: FUN_10025ae90
// address: 0x10025ae90
// body: available
// range: 0x10025ae90-0x10025b077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025b034) */
/* WARNING: Removing unreachable block (ram,0x00010025af78) */

undefined1 * FUN_10025ae90(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 local_68 [8];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100a80ab0;
  FUN_100004bb4(&DAT_100a80ab0,&DAT_100814e90);
  lVar8 = *(long *)(puVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,puVar4);
  FUN_10025a284();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1009a8670,&DAT_1009a8670,lVar3,
             puVar4,uVar1);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar4 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar4,puVar2);
    local_52 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&local_52,puVar2);
    puVar5 = &DAT_100a808f0;
    FUN_100004bb4(&DAT_100a808f0,&DAT_100814af0);
    local_53 = 2;
    puVar6 = &DAT_100a80920;
    FUN_10025b118(&DAT_100a80920,PTR___sSSSesWP_100995828,PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_68,puVar5,&local_53,puVar2,puVar5,puVar6);
    (**(code **)(lVar8 + 8))(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return puVar4;
}

