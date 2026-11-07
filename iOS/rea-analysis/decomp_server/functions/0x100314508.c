// rea decompile_all
// name: FUN_100314508
// address: 0x100314508
// body: available
// range: 0x100314508-0x100314657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314508(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*param_3 + 0x58),*(undefined8 *)(*param_3 + 0x50),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar8 = *(long *)(lVar1 + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  lVar3 = 0;
  __ss6ResultOMa(0,lVar1,puVar2,PTR___ss5ErrorWS_100995c48);
  puVar7 = (undefined8 *)
           (puVar6 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar7,param_2,lVar3);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar3);
  if ((int)puVar4 == 1) {
    uVar5 = *puVar7;
    FUN_100314210(uVar5,param_1);
    _swift_errorRelease(uVar5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar6,puVar7,lVar1);
    FUN_100314658(puVar6,param_1);
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
  }
  return;
}

