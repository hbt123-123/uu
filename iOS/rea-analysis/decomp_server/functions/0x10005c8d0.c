// rea decompile_all
// name: FUN_10005c8d0
// address: 0x10005c8d0
// body: available
// range: 0x10005c8d0-0x10005ca73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c8d0(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  uVar5 = *param_1;
  cVar1 = *(char *)(param_1 + 5);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if ((cVar1 != '\x02') && (uVar2 = param_3, FUN_100003278(param_3,uVar5), (int)uVar2 == 0)) {
      puVar3 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar3 + 0x10,param_2);
      puVar4 = &DAT_100998dc8;
      _swift_allocObject(&DAT_100998dc8,0x31,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(int *)(puVar4 + 0x18) = (int)param_3;
      *(undefined8 *)(puVar4 + 0x20) = param_8;
      *(undefined8 *)(puVar4 + 0x28) = param_9;
      puVar4[0x30] = param_10 & 1;
      puVar3 = &DAT_100998df0;
      _swift_allocObject(&DAT_100998df0,0x20,7);
      *(code **)(puVar3 + 0x10) = param_4;
      *(undefined8 *)(puVar3 + 0x18) = param_5;
      _swift_retain(param_5);
      FUN_100058d1c(param_6,param_7,thunk_FUN_10007f2c8,puVar4,thunk_FUN_10007f280,puVar3,
                    &DAT_100998878,FUN_10007ed80,&DAT_100998890);
      _swift_release(param_2);
      _swift_release(puVar4);
      _swift_release(puVar3);
      return;
    }
    _swift_release();
  }
  (*param_4)(0);
  return;
}

