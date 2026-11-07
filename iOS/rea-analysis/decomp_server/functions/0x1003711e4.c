// rea decompile_all
// name: FUN_1003711e4
// address: 0x1003711e4
// body: available
// range: 0x1003711e4-0x1003713df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1003711e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined *param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  
  lVar2 = 0;
  local_98 = param_3;
  local_90 = param_2;
  local_80 = param_1;
  local_70 = param_6;
  FUN_10035c064();
  puVar7 = auStack_a0 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_78 = lVar2;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar9 = (long)puVar7 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar12 = lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = param_5;
  local_88 = lVar2;
  if (param_5 == (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10035fff4();
  }
  if (param_4 == 0) {
    _swift_bridgeObjectRetain(param_5);
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    puVar4 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    local_68 = puVar5;
    _swift_bridgeObjectRetain(param_4);
    FUN_10037220c(local_98,param_4,0x7a69726f68747541,0xed00006e6f697461,puVar4);
    puVar5 = local_68;
  }
  pcVar11 = *(code **)(lVar10 + 0x10);
  (*pcVar11)(lVar9,local_90,lVar3);
  FUN_1003713e0(lVar12,lVar9,3,puVar5);
  puVar5 = &DAT_100a887b0;
  FUN_100004bb4(&DAT_100a887b0,&DAT_10081c968);
  iVar1 = *(int *)(puVar5 + 0x30);
  (*pcVar11)(puVar7,local_80,lVar3);
  lVar2 = local_88;
  (**(code **)(lVar8 + 0x10))(puVar7 + iVar1,lVar12,local_88);
  _swift_storeEnumTagMultiPayload(puVar7,local_78,1);
  puVar6 = puVar7;
  FUN_100371aa0(puVar7,local_70);
  FUN_10035c694(puVar7);
  (**(code **)(lVar8 + 8))(lVar12,lVar2);
  return puVar6;
}

