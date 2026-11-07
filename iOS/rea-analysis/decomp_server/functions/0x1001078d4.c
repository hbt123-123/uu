// rea decompile_all
// name: FUN_1001078d4
// address: 0x1001078d4
// body: available
// range: 0x1001078d4-0x100107a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001078d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_100401b14(0);
  local_60 = param_1;
  uStack_58 = param_2;
  FUN_1003fb48c(FUN_100108440,auStack_70,0xd000000000000097,0x8000000100889170,0xd00000000000001f,
                0x800000010088ab40,0x200,0);
  puVar1 = &DAT_100a76918;
  FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar2);
  puVar1 = &DAT_10099d478;
  _swift_allocObject(&DAT_10099d478,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  __sScMMa(0);
  _swift_retain(puVar1);
  uVar3 = param_2;
  _swift_bridgeObjectRetain();
  __sScM6sharedScMvgZ();
  uVar4 = uVar3;
  FUN_100108448();
  puVar5 = &DAT_10099d4c8;
  _swift_allocObject(&DAT_10099d4c8,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(undefined **)(puVar5 + 0x20) = puVar1;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  *(undefined8 *)(puVar5 + 0x30) = param_2;
  _swift_release(puVar1);
  FUN_1000f96dc(0,0,auStack_70 + -extraout_x8,&DAT_10080d880,puVar5);
  _swift_release();
  return;
}

