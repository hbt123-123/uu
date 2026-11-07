// rea decompile_all
// name: FUN_1007ba9f0
// address: 0x1007ba9f0
// body: available
// range: 0x1007ba9f0-0x1007bab03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007baaa0) */

void FUN_1007ba9f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  
  puVar3 = &DAT_100abcab8;
  FUN_1007b4550();
  lVar8 = *(long *)(puVar3 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1007baf18();
  puVar5 = &DAT_1009eb178;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1009eb178,
             &DAT_1009eb178,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar8 + 8))(&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar3)
    ;
    FUN_10003f094(param_2);
    *param_1 = puVar5;
    param_1[1] = puVar6;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

