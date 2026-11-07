// rea decompile_all
// name: FUN_1000108f4
// address: 0x1000108f4
// body: available
// range: 0x1000108f4-0x100010a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100010a44) */
/* WARNING: Removing unreachable block (ram,0x0001000109c4) */

void FUN_1000108f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar3 = &DAT_100102a80;
  FUN_10000eb08(&DAT_100102a80,&DAT_1000cf370);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_100010874();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_90 - extraout_x8,&DAT_1000f2950,&DAT_1000f2950,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_80 = 0;
    puVar5 = &local_80;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_51 = 1;
    puVar6 = puVar5;
    FUN_100010ca4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_80,&DAT_1000f10a8,&local_51,puVar3,&DAT_1000f10a8,puVar6);
    (**(code **)(lVar8 + 8))((long)&local_90 - extraout_x8,puVar3);
    local_90 = CONCAT71(uStack_7f,local_80);
    uStack_88 = uStack_78;
    FUN_100001428(param_2);
    *param_1 = puVar5;
    param_1[1] = puVar7;
    param_1[3] = uStack_88;
    param_1[2] = local_90;
    param_1[4] = local_70;
    param_1[5] = uStack_68;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

