// rea decompile_all
// name: FUN_1000b2a50
// address: 0x1000b2a50
// body: available
// range: 0x1000b2a50-0x1000b2baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b2a50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  
  uVar4 = *(long *)(*(long *)(param_1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar5 = (long)&local_80 - uVar4;
  lVar6 = lVar5 - uVar4;
  pcVar7 = *(code **)(*(long *)(param_1 + -8) + 0x10);
  (*pcVar7)(lVar6);
  puVar1 = &DAT_100104d80;
  FUN_10000eb08(&DAT_100104d80,&USHORT_1000d6b28);
  puVar2 = &local_80;
  _swift_dynamicCast(puVar2,lVar6,param_1,puVar1,0xe);
  lVar6 = local_60;
  uVar3 = local_68;
  if ((int)puVar2 == 0) {
    local_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    FUN_1000b2bb0(&local_80);
  }
  else {
    FUN_10000eba0(&local_80,local_68);
    __s10Foundation14LocalizedErrorP16errorDescriptionSSSgvgTj(uVar3);
    FUN_100001428(&local_80);
    if (lVar6 != 0) {
      return;
    }
  }
  lVar6 = unaff_x20;
  _swift_getDynamicType(unaff_x20,param_1,0);
  uVar3 = 0;
  FUN_1000b2bf8(0);
  _swift_dynamicCastMetatype(lVar6,uVar3);
  if (lVar6 == 0) {
    (*pcVar7)(lVar5,unaff_x20,param_1);
    __sSS10describingSSx_tclufC(lVar5,param_1);
  }
  else {
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(param_1,param_2);
  }
  return;
}

