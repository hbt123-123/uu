// rea decompile_all
// name: FUN_100293728
// address: 0x100293728
// body: available
// range: 0x100293728-0x1002939f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100293834) */
/* WARNING: Removing unreachable block (ram,0x000100293960) */
/* WARNING: Removing unreachable block (ram,0x0001002939e4) */

void FUN_100293728(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_90 [8];
  
  puVar2 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  puVar2 = &DAT_100a83400;
  FUN_100004bb4(&DAT_100a83400,&DAT_1008178f0);
  puVar6 = (undefined8 *)
           ((long)auStack_90 +
           (-(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0) -
           (lVar4 + 0xfU & 0xfffffffffffffff0)));
  *puVar6 = param_3;
  puVar6[1] = param_4;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar3 = &DAT_100a83408;
  FUN_100004bb4(&DAT_100a83408,&DAT_1008178f8);
  _swift_storeEnumTagMultiPayload(puVar6,puVar3,0);
  iVar1 = *(int *)(puVar2 + 0x2c);
  _swift_weakInit((long)puVar6 + (long)iVar1,0);
  _swift_weakAssign((long)puVar6 + (long)iVar1,param_5);
  FUN_100008184(param_3,param_4);
  (*param_1)(puVar6);
  FUN_100040bb4(puVar6,&DAT_100a83400,&DAT_1008178f0);
  lVar4 = *(long *)(param_5 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar5);
  _swift_beginAccess(lVar4 + 0x18,auStack_90,0x21,0);
  FUN_10029590c(lVar4 + 0x18,param_5);
  _swift_endAccess(auStack_90);
  _os_unfair_lock_unlock(uVar5);
  return;
}

