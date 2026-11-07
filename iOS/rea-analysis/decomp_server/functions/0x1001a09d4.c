// rea decompile_all
// name: FUN_1001a09d4
// address: 0x1001a09d4
// body: available
// range: 0x1001a09d4-0x1001a0c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001a0b68) */
/* WARNING: Removing unreachable block (ram,0x0001001a0bfc) */
/* WARNING: Removing unreachable block (ram,0x0001001a0c10) */
/* WARNING: Removing unreachable block (ram,0x0001001a0ae8) */

undefined8 FUN_1001a09d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_58;
  
  puVar3 = &DAT_100a7c808;
  FUN_100004bb4(&DAT_100a7c808,&DAT_100810d70);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1001a0c2c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1009a1c38,&DAT_1009a1c38,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar5 = &DAT_100a7c818;
    FUN_100004bb4(&DAT_100a7c818,&DAT_100810d78);
    local_61 = 0;
    puVar6 = &DAT_100a7c820;
    FUN_1001a0d5c(&DAT_100a7c820,FUN_1001a0c6c,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar5,&local_61,puVar3,puVar5,puVar6);
    local_61 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar5,&local_61,puVar3,puVar5,puVar6);
    puVar5 = &DAT_100a7c830;
    FUN_100004bb4(&DAT_100a7c830,&DAT_100810d80);
    local_61 = 2;
    puVar6 = &DAT_100a7c838;
    FUN_1001a0cac(&DAT_100a7c838,FUN_1001a0d1c,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar5,&local_61,puVar3,puVar5,puVar6);
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    local_58 = uVar1;
  }
  return local_58;
}

