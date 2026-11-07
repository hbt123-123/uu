// rea decompile_all
// name: FUN_1004fa9c8
// address: 0x1004fa9c8
// body: available
// range: 0x1004fa9c8-0x1004fab07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fa9c8(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(param_1,1,1,lVar2);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar2);
  (*pcVar5)(param_1,0,1,lVar2);
  uStack_68 = param_10;
  lVar2 = 0;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_1004fd234(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[4] = param_3[4];
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = param_6;
  return;
}

