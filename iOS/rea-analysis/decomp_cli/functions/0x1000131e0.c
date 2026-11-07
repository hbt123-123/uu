// rea decompile_all
// name: FUN_1000131e0
// address: 0x1000131e0
// body: available
// range: 0x1000131e0-0x1000133cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100013360) */
/* WARNING: Removing unreachable block (ram,0x000100013320) */
/* WARNING: Removing unreachable block (ram,0x000100013374) */
/* WARNING: Removing unreachable block (ram,0x000100013388) */
/* WARNING: Removing unreachable block (ram,0x0001000132b4) */

void FUN_1000131e0(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  long local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  long local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  local_70 = param_1;
  FUN_10000eb08(param_3,param_4);
  lVar10 = *(long *)(param_3 + -8);
  local_68 = param_3;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  (*param_5)();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_90 + -extraout_x8,param_6,param_6,lVar4,uVar1,uVar2);
  lVar4 = local_68;
  puVar3 = local_70;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    lVar7 = local_68;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_52 = 1;
    puVar6 = &local_52;
    lVar8 = lVar4;
    local_78 = puVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_53 = 2;
    puVar5 = &local_53;
    lVar9 = lVar4;
    local_88 = puVar6;
    local_80 = lVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar10 + 8))(auStack_90 + -extraout_x8,lVar4);
    FUN_100001428(param_2);
    *puVar3 = local_78;
    puVar3[1] = lVar7;
    puVar3[2] = local_88;
    puVar3[3] = local_80;
    puVar3[4] = puVar5;
    puVar3[5] = lVar9;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

